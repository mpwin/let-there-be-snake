#ifndef BOARD_H
#define BOARD_H

#include "Snake.h"
#include "Tile.h"
#include <glew.h>

class Board
{
public:
    Board();
    ~Board();

    void check_game_over();
    void draw();
    bool is_game_over();
    void update();

    Snake *get_snake_ptr();

    static const int rows   = 50;
    static const int cols   = 50;
    static const int width  = cols * Tile::width;
    static const int height = rows * Tile::height;

private:
    Tile  tiles[rows][cols];
    Snake snake;
    bool  game_over;
};

#endif
