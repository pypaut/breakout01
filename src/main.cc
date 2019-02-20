#include "breakout.hh"

int main(void)
{
    Game* game = nullptr;
    game = new Game();

    game->init("Breakdown", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                            1400, 800, false);

    while(game->is_running())
    {
        game->handleEvent();
        game->update();
        game->render();
    }

    return 0;
}
