#pragma once

class Game
{
    public:
        void init(const char* title, int x, int y, int w, int h, bool fscreen);
        void handleEvent();
        void update();
        void render();
        void clean();
        bool is_running();

    private:
        bool isRunning_;
        SDL_Window* window_;
        SDL_Renderer* renderer_;
}
