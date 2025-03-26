#include "UiSdl.hpp"

#include <iostream>
#include <SDL2/SDL2_gfxPrimitives.h>

void uiInit(SDL_Window *& window, SDL_Renderer *& renderer) {
   if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "init error: " << SDL_GetError() << std::endl;
        exit(-1);
    }

    window = SDL_CreateWindow("naze-cpp", 
            SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
            200, 200, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        std::cerr << "window error: " << SDL_GetError() << std::endl;
        exit(-1);
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        std::cerr << "renderer error: " << SDL_GetError() << std::endl;
        exit(-1);
    }
}

void uiQuit(SDL_Window * window, SDL_Renderer * renderer) {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void drawRect(SDL_Renderer * renderer, int i, int j, Uint8 r, Uint8 g, Uint8 b) {
    const int x = j*20;
    const int y = 180 - i*20; 
    SDL_Rect fillRect = { x, y, 20, 20 };
    SDL_SetRenderDrawColor(renderer, r, g, b, 0xFF);        
    SDL_RenderFillRect(renderer, &fillRect);
}

void uiRender(SDL_Renderer * renderer, const Board & b) {

    // clear view
    SDL_SetRenderDrawColor (renderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_RenderClear(renderer);

    // draw board
    // TODO
    drawRect(renderer, b.getI(), b.getJ(), 0xff, 0xff, 0xff);

    // run rendering
    SDL_RenderPresent(renderer);
}

bool uiTick(SDL_Window * window, SDL_Renderer * renderer, Board & board) {

    // handle event
    SDL_Event event;
    if (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT)
            return false;

        if (event.type == SDL_KEYDOWN) {
            switch (event.key.keysym.sym) {
                case SDLK_LEFT:   board.tryGoLeft();  break;
                // TODO        
                case SDLK_ESCAPE: exit(0);
            }
        }
    }

    uiRender(renderer, board);

    SDL_UpdateWindowSurface(window);
    return true;
}

