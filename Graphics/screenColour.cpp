#include "screenColour.h"
#include <iostream>

Screen::Screen() : window(nullptr), renderer(nullptr), font(nullptr) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "Failed to initialize SDL: " << SDL_GetError() << std::endl;
        exit(1);
    }

    if (TTF_Init() == -1) {
        std::cerr << "Failed to initialize SDL_ttf: " << TTF_GetError() << std::endl;
        SDL_Quit();
        exit(1);
    }

    window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (!window || !renderer) {
        std::cerr << "Failed to create window or renderer: " << SDL_GetError() << std::endl;
        TTF_Quit();
        SDL_Quit();
        exit(1);
    }

    initFont(); // Initialize font
}

Screen::~Screen() {
    if (font) {
        TTF_CloseFont(font);
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();
}

void Screen::pixel(float x, float y) {
    points.emplace_back(x, y);
}

void Screen::clear() {
    points.clear();
}

void Screen::show() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    
    for (const auto& point : points) {
        SDL_RenderDrawPointF(renderer, point.x, point.y);
    }

    SDL_RenderPresent(renderer);
}

void Screen::input() {
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) {
            SDL_Quit();
            exit(0);
        }
    }
}

void Screen::drawText(const std::string& text, int x, int y, SDL_Color color) {
    if (!font) {
        std::cerr << "Font not initialized" << std::endl;
        return;
    }

    SDL_Surface* textSurface = TTF_RenderText_Solid(font, text.c_str(), color);
    if (!textSurface) {
        std::cerr << "Failed to create text surface: " << TTF_GetError() << std::endl;
        return;
    }

    SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
    SDL_FreeSurface(textSurface);
    if (!textTexture) {
        std::cerr << "Failed to create text texture: " << SDL_GetError() << std::endl;
        return;
    }

    SDL_Rect dstRect = { x, y, textSurface->w, textSurface->h };
    SDL_RenderCopy(renderer, textTexture, nullptr, &dstRect);
    SDL_DestroyTexture(textTexture);
}

void Screen::initFont() {
    font = TTF_OpenFont("path_to_your_font.ttf", 24); // Specify path to your .ttf font file and font size
    if (!font) {
        std::cerr << "Failed to load font: " << TTF_GetError() << std::endl;
        TTF_Quit();
        SDL_Quit();
        exit(1);
    }
}
