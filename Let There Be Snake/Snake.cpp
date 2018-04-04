#include "Snake.h"

Snake::Snake()
{
    this->length = 1;
    this->moving = false;

    this->tiles.push_back(Tile(Tile::SNAKE, 3, 3));
}

Snake::~Snake() {}

std::vector<Tile> Snake::get_tiles()
{
    return tiles;
}
