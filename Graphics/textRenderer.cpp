#include "textRenderer.h"
#include <iostream>

// Constructor
TextRenderer::TextRenderer(SDL_Renderer* renderer, const std::string& fontPath, int fontSize)
    : renderer(renderer), font(nullptr)
{
    font = TTF_OpenFont(fontPath.c_str(), fontSize);
    if (!font) {
        std::cerr << "Failed to load font: " << TTF_GetError() << std::endl;
        exit(1);
    }
}

// Destructor
TextRenderer::~TextRenderer()
{
    if (font) {
        TTF_CloseFont(font);
    }
}

// Method to render text
void TextRenderer::drawText(const std::string& text, int x, int y, SDL_Color color)
{
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
