#include "breakout.hh"

int main(void)
{

  /* Init */
  if (SDL_Init(SDL_INIT_EVERYTHING))
  {
    SDL_Log("Unable to initialize SDL : %s", SDL_GetError());
    return 1;
  }

  /* Window */
  SDL_Window* window = SDL_CreateWindow(
      "My Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
      800, 500,
      0);

  if (!window)
  {
    SDL_Log("Unable to create window : %s", SDL_GetError());
    return 1;
  }

  /* Renderer */
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

  /* Surface */
  SDL_Surface* surface = SDL_LoadBMP("media/bar.bmp");
  if (!surface)
  {
    SDL_Log("Unable to load surface : %s", SDL_GetError());
    return 1;
  }

  /* Texture */
  SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);

  bool running = true;

  while (running)
  {
    SDL_Event event;
    if (SDL_PollEvent(&event))
    {
      if (event.key.keysym.sym == SDLK_ESCAPE)
        running = false;
    }

    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
  }

  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
