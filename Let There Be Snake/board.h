#ifndef BOARD_H
#define BOARD_H

#include <glew.h>
#include "Tile.h"

class Board
{
public:
    Board();
    void draw();

private:
    int width();
    int height();

    int rows, cols;
};

#endif
