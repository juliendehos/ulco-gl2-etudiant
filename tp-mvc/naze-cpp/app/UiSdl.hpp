#pragma once

#include <Board.hpp>

#include <SDL.h>

void uiInit(SDL_Window *& window, SDL_Renderer *& renderer);

void uiQuit(SDL_Window * window, SDL_Renderer * renderer);

void uiRender(SDL_Renderer * renderer, const Board & board);

bool uiTick(SDL_Window * window, SDL_Renderer * renderer, Board & board);

