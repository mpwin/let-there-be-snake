#include "Snake.h"

Snake::Snake()
{
    this->row    = 3;
    this->col    = 3;
    this->length = 5;
    this->moving = false;

    this->tiles.push_back(Tile(Tile::SNAKE, row, col));
}

Snake::~Snake() {}

int Snake::get_row()
{
    return row;
}

int Snake::get_col()
{
    return col;
}

void Snake::face_up()
{
    this->direction = UP;
    this->moving    = true;
}

void Snake::face_down()
{
    this->direction = DOWN;
    this->moving    = true;
}

void Snake::face_left()
{
    this->direction = LEFT;
    this->moving    = true;
}

void Snake::face_right()
{
    this->direction = RIGHT;
    this->moving    = true;
}

bool Snake::is_moving()
{
    return moving;
}

void Snake::move()
{
    switch (direction)
    {
    case UP    : this->row++; break;
    case DOWN  : this->row--; break;
    case LEFT  : this->col--; break;
    case RIGHT : this->col++; break;
    default    : break;
    }

    this->tiles.insert(tiles.begin(), Tile(row, col));

    if (tiles.size() > length)
    {
        tiles.pop_back();
    }
}

std::vector<Tile> Snake::get_tiles()
{
    return tiles;
}
