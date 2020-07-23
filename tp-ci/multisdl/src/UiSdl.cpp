#include "UiSdl.hpp"

#include <iostream>
#include <SDL2/SDL2_gfxPrimitives.h>

const char * WIN_TITLE = "multisdl-wasm";
const int SCREEN_WIDTH = 400;
const int SCREEN_HEIGHT = 400;

void uiInit(SDL_Window *& window, SDL_Renderer *& renderer) {
   if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "init error: " << SDL_GetError() << std::endl;
        exit(-1);
    }

    window = SDL_CreateWindow(WIN_TITLE, 
            SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
            SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
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

void uiRender(SDL_Renderer * renderer, const Scene & scene) {

    // clear view
    SDL_SetRenderDrawColor (renderer, 127, 127, 127, 255);
    SDL_RenderClear(renderer);

    // draw background
    const int x = scene.xpos();
    const int y = 200;
    const int radius = scene.radius();
    const int color = scene.color();
    filledCircleRGBA(renderer, x, y, radius, color, color, color, 255);

    // run rendering
    SDL_RenderPresent(renderer);
}

bool uiTick(SDL_Window * window, SDL_Renderer * renderer, Scene & scene,
        std::function<void(int)> report) {

    // handle event
    SDL_Event event;
    if (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT)
            return false;
        if (event.button.button == SDL_BUTTON_RIGHT and event.type == SDL_MOUSEBUTTONUP) 
            return false;
    }

    // update scene and report status
    scene.update();
    report(scene.xpos());

    uiRender(renderer, scene);
    SDL_UpdateWindowSurface(window);
    return true;
}

