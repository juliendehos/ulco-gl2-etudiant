
#include "UiSdl.hpp"

SDL_Window * window;
SDL_Renderer * renderer;

int main() {
    Board board;
    uiInit(window, renderer);
    while (uiTick(window, renderer, board));
    uiQuit(window, renderer);
    return 0;
}

