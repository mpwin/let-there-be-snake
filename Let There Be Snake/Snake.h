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

    void face_up();
    void face_down();
    void face_left();
    void face_right();
    bool is_moving();
    void move();

    std::vector<Tile> get_tiles();

private:
    DIRECTION direction;
    int       row, col, length;
    bool      moving;

    std::vector<Tile> tiles;
};

#endif SNAKE_H
