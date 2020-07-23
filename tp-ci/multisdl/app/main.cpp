#include <UiSdl.hpp>

#include <iostream>

Scene scene;

SDL_Window * window;
SDL_Renderer * renderer;

void report(int xpos) {
    std::cout << "xpos: " << xpos << std::endl;
}

int main() {
    uiInit(window, renderer);
    while (uiTick(window, renderer, scene, report));
    uiQuit(window, renderer);
    return 0;
}

