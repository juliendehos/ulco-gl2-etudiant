#include <emscripten.h>
#include <emscripten/bind.h>

#include <UiSdl.hpp>

Board board;

SDL_Window * window;
SDL_Renderer * renderer;

void tick() {
    uiTick(window, renderer, board);
}

int main() {
    uiInit(window, renderer);
    emscripten_set_main_loop(tick, -1, 1);
    uiQuit(window, renderer);
    return 0;
}

