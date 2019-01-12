#ifndef BOARD_H
#define BOARD_H

#include "snake.h"
#include "tile.h"
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <ctime>
#include <cstdlib>

class Board
{
public:
    Board();
    ~Board();

    void add_food();
    void check_game_over();
    void draw();
    bool is_game_over();
    void update();

    Snake *get_snake_ptr();

    static const int rows   = 30;
    static const int cols   = 30;
    static const int width  = cols * Tile::width;
    static const int height = rows * Tile::height;

private:
    Tile  tiles[rows][cols];
    Snake snake;
    Tile  food;
    bool  game_over;
};

#endif
