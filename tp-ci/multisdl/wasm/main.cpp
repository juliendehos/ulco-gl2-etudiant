#include <UiSdl.hpp>

#include <emscripten.h>
#include <emscripten/bind.h>
#include <iostream>

Scene scene;

SDL_Window * window;
SDL_Renderer * renderer;

void report(int xpos) {
    //std::cout << "xpos: " << xpos << std::endl;
    EM_ASM({ reportDom($0); }, xpos);
}

void tick() {
    uiTick(window, renderer, scene, report);
}

void switch_color() {
    scene.switchColor();
    tick();
}

int main() {
    uiInit(window, renderer);
    emscripten_set_main_loop(tick, 0, 1);
    uiQuit(window, renderer);
    return 0;
}

EMSCRIPTEN_BINDINGS(wasm_sdl_test) {
    emscripten::function("switch_color", &switch_color);
}

