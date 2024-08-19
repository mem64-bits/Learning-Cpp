#ifndef TEXTRENDERER_H
#define TEXTRENDERER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>

class TextRenderer
{
private:
    TTF_Font* font;
    SDL_Renderer* renderer;

public:
    // Constructor
    TextRenderer(SDL_Renderer* renderer, const std::string& fontPath, int fontSize);

    // Destructor
    ~TextRenderer();

    // Method to render text
    void drawText(const std::string& text, int x, int y, SDL_Color color);
};

#endif // TEXTRENDERER_H
