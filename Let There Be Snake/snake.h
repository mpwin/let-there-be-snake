#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include "tile.h"

class Snake
{
public:
    Snake();

    enum DIRECTION
    {
        UP, DOWN, LEFT, RIGHT
    };

private:
    DIRECTION direction;
    int       length;
    bool      moving;

    std::vector<Tile> tiles;
};

#endif SNAKE_H
