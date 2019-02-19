#include "breakout.hh"

int main(void)
{

  if (SDL_Init(SDL_INIT_EVERYTHING))
  {
    SDL_Log("Unable to initialize SDL : %s", SDL_GetError());
    return 1;
  }

  SDL_Window *window = SDL_CreateWindow(
    "My Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
    800, 500,
    0);

  if (!window)
  {
    SDL_Log("Unable to create window : %s", SDL_GetError());
    return 1;
  }

  SDL_Delay(3000);

  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
