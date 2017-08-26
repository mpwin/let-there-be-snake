#include "snake.h"

Snake::Snake()
{
    this->length = 1;
    this->moving = false;

    this->tiles.push_back(Tile(3, 3));
}
