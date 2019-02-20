#include "Game.hh"

void Game::init(const char* title, int x, int y, int w, int h, bool fscreen)
{
    isRunning_ = true;
    /* Init */
    if (SDL_Init(SDL_INIT_EVERYTHING))
    {
        SDL_Log("Could not init SDL : %s", SDL_GetError());
        isRunning_ = false;
    }

    int flag = 0;
    if (fscreen)
    {
        flag = SDL_WINDOW_FULLSCREEN;
    }

    /* Window */
    window_ = SDL_CreateWindow(title, x, y, w, h, flag);
    if (!window_)
    {
        SDL_Log("Could not create window : %s", SDL_GetError());
        isRunning_ = false;
    }

    /* Renderer */
    renderer_ = SDL_CreateRenderer(window, -1, 0);
    if (!renderer_)
    {
        SDL_Log("Could not create renderer : %s", SDL_GetError());
        isRunning_ = false;
    }

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
}


void Game::handleEvent()
{
    SDL_Event event;
    SDL_PollEvent(&even);

    switch (event.type)
    {
        case SDL_QUIT:
            isRunning_ = false;
            break;

        default:
            break;
    }
}


void Game::update()
{}


void Game::render()
{
    SDL_RenderClear(renderer);
    /* Things to render */
    SDL_RenderPresent(renderer);
}


void Game::clean()
{
    SDL_DestroyWindow(window_);
    SDL_DestroyRenderer(renderer_);
    SDL_Quit();
}


bool Game::is_running()
{
    return isRunning_;
}
