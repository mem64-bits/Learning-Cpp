// TextRenderer.h

#ifndef TEXT_RENDERER_H
#define TEXT_RENDERER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>

class TextRenderer {
public:
    TextRenderer(SDL_Renderer* renderer);
    ~TextRenderer();
    
    bool loadFont(const std::string& fontPath, int fontSize);
    void renderText(const std::string& message, int x, int y, SDL_Color color);

private:
    SDL_Renderer* renderer;
    TTF_Font* font;
};

#endif // TEXT_RENDERER_H
