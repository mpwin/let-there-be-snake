#ifndef SNAKE_H
#define SNAKE_H

#include "Tile.h"
#include <vector>

class Snake
{
public:
    enum DIRECTION
    {
        UP, DOWN, LEFT, RIGHT
    };

    Snake();
    ~Snake();

    std::vector<Tile> get_tiles();

private:
    DIRECTION direction;
    int       length;
    bool      moving;

    std::vector<Tile> tiles;
};

#endif SNAKE_H
