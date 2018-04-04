#ifndef BOARD_H
#define BOARD_H

#include <glew.h>
#include "Tile.h"

class Board
{
public:
    Board();
    ~Board();

    void draw();

    static const int rows   = 100;
    static const int cols   = 100;
    static const int width  = cols * Tile::width;
    static const int height = rows * Tile::height;

private:
    Tile tiles[rows][cols];
};

#endif
