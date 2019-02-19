#include "breakout.hh"

int main(void)
{

  if (SDL_Init(SDL_INIT_EVERYTHING))
  {
    SDL_Log("Unable to initialize SDL : %s", SDL_GetError());
    return 1;
  }


  bool Running = true;

  while (Running)
  {
    Event();
    Update();
    Draw();
  }

  SDL_Quit();

  return 0;
}
