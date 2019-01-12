#ifndef GAME_H
#define GAME_H

#include "board.h"
#include "snake.h"
#include "window.h"

class Game
{
public:
    Game();
    ~Game();

    void handle_events();
    void update();
    void render();

    bool is_running() const;

private:
    Window window;
    Board  board;
    Snake  *snake;

    bool running;
    int  current_time;
    int  last_time;
};

#endif
