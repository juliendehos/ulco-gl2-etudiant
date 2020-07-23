#pragma once

#include "Scene.hpp"

#include <functional>
#include <SDL.h>

void uiInit(SDL_Window *& window, SDL_Renderer *& renderer);

void uiQuit(SDL_Window * window, SDL_Renderer * renderer);

void uiRender(SDL_Renderer * renderer, const Scene & Scene);

bool uiTick(SDL_Window * window, SDL_Renderer * renderer, Scene & scene,
        std::function<void(int)> report);

