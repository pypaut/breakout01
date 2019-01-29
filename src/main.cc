#include "breakout.hh"

int main(void)
{

    bool Running = true;

    while (Running)
    {
        Event();
        Update();
        Draw();
    }

    return 0;
}
