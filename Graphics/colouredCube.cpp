#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

// Assuming Screen is defined elsewhere with appropriate methods
#include "screenColour.h"
#include "musicPlayer.h"

// Vec3 struct to represent 3D points
struct Vec3 {
    float x, y, z;

    void rotateX(float angle) {
        float rad = angle;
        float newY = std::cos(rad) * y - std::sin(rad) * z;
        float newZ = std::sin(rad) * y + std::cos(rad) * z;
        y = newY;
        z = newZ;
    }

    void rotateY(float angle) {
        float rad = angle;
        float newX = std::cos(rad) * x + std::sin(rad) * z;
        float newZ = -std::sin(rad) * x + std::cos(rad) * z;
        x = newX;
        z = newZ;
    }

    void rotateZ(float angle) {
        float rad = angle;
        float newX = std::cos(rad) * x - std::sin(rad) * y;
        float newY = std::sin(rad) * x + std::cos(rad) * y;
        x = newX;
        y = newY;
    }

    void rotate(float angleX, float angleY, float angleZ) {
        rotateX(angleX);
        rotateY(angleY);
        rotateZ(angleZ);
    }
};

// Face struct to represent a face of the cube
struct Face {
    std::vector<int> indices;
    float depth;
    SDL_Color color;
    SDL_Texture* texture;

    Face(const std::vector<int>& indices, SDL_Color color, SDL_Texture* texture)
        : indices(indices), color(color), texture(texture), depth(0) {}

    void calculateDepth(const std::vector<Vec3>& points) {
        float totalZ = 0;
        for (int index : indices) {
            totalZ += points[index].z;
        }
        depth = totalZ / indices.size();
    }
};

// Initialize SDL_image and load an image
SDL_Texture* loadImage(SDL_Renderer* renderer, const std::string& filePath) {
    SDL_Surface* surface = IMG_Load(filePath.c_str());
    if (!surface) {
        std::cerr << "Failed to load image: " << IMG_GetError() << std::endl;
        return nullptr;
    }
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    return texture;
}

// Main function
int main() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "Failed to initialize SDL: " << SDL_GetError() << std::endl;
        return -1;
    }

    if (IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG) == 0) {
        std::cerr << "Failed to initialize SDL_image: " << IMG_GetError() << std::endl;
        SDL_Quit();
        return -1;
    }

    SDL_Window* window = SDL_CreateWindow("Textured Cube", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // Load music
    MusicPlayer musicPlayer;
    if (!musicPlayer.playMusic("ps2_start_up.mp3")) {
        std::cerr << "Failed to play music." << std::endl;
        return -1;
    }

    // Load texture
    SDL_Texture* dirt_texture = loadImage(renderer, "textures/dirt.png");
    if (!dirt_texture) {
        SDL_Quit();
        return -1;
    }

    Screen screen;

    // Define points of the cube
    std::vector<Vec3> points{
        {100, 100, 100}, {200, 100, 100}, {200, 200, 100}, {100, 200, 100},
        {100, 100, 200}, {200, 100, 200}, {200, 200, 200}, {100, 200, 200}
    };

    // Define faces of the cube
    std::vector<Face> faces{
        {{0, 1, 2, 3}, {255, 0, 0, 255}, dirt_texture},    // Front face
        {{4, 5, 6, 7}, {0, 255, 0, 255}, dirt_texture},    // Back face
        {{0, 1, 5, 4}, {0, 0, 255, 255}, dirt_texture},    // Bottom face
        {{2, 3, 7, 6}, {255, 255, 0, 255}, dirt_texture},  // Top face
        {{0, 3, 7, 4}, {255, 0, 255, 255}, dirt_texture},  // Left face
        {{1, 2, 6, 5}, {0, 255, 255, 255}, dirt_texture}   // Right face
    };

    // Center of the cube
    Vec3 center{0, 0, 0};
    for (const auto& p : points) {
        center.x += p.x;
        center.y += p.y;
        center.z += p.z;
    }
    center.x /= points.size();
    center.y /= points.size();
    center.z /= points.size();

    // Main loop
    bool running = true;
    while (running) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Set the clear color to black
        SDL_RenderClear(renderer);                      // Clear the renderer


        // Rotate points around the center
        for (auto& p : points) {
            p.x -= center.x;
            p.y -= center.y;
            p.z -= center.z;

            p.rotate(0.02f, 0.01f, 0.04f);

            p.x += center.x;
            p.y += center.y;
            p.z += center.z;
        }

        // Calculate depth for each face
        for (auto& face : faces) {
            face.calculateDepth(points);
        }

        // Sort faces by depth (far to near)
        std::sort(faces.begin(), faces.end(), [](const Face& a, const Face& b) {
            return a.depth > b.depth;
        });

        // Draw faces with texture and outlines
        for (const auto& face : faces) {
            std::vector<SDL_FPoint> polygon;
            for (const int index : face.indices) {
                polygon.push_back({points[index].x, points[index].y});
            }

            if (face.texture) {
                SDL_Rect dstRect = {
                    static_cast<int>(polygon[0].x),
                    static_cast<int>(polygon[0].y),
                    std::abs(static_cast<int>(polygon[1].x - polygon[0].x)),
                    std::abs(static_cast<int>(polygon[2].y - polygon[0].y))
                };
                SDL_RenderCopy(renderer, face.texture, NULL, &dstRect);
            } else {
                screen.drawFilledPolygon(polygon, face.color);
            }

            // Draw outlines
            for (size_t j = 0; j < polygon.size(); ++j) {
                size_t next = (j + 1) % polygon.size();
                screen.drawLine(polygon[j].x, polygon[j].y, polygon[next].x, polygon[next].y, {0, 0, 0, 255});
            }

            SDL_RenderPresent(renderer);
            SDL_Delay(30);
        }

        
    }

    // Cleanup
    SDL_DestroyTexture(dirt_texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();

    return 0;
}
