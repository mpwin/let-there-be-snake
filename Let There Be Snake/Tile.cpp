#include "Tile.h"

Tile::Tile()
{
    this->type = BLANK;
}

Tile::Tile(int row, int col)
{
    this->row = row;
    this->col = col;
}

Tile::Tile(TYPE type, int row, int col)
{
    this->type = type;
    this->row  = row;
    this->col  = col;
}

Tile::~Tile() {}

Tile::TYPE Tile::get_type()
{
    return type;
}

int Tile::get_row()
{
    return row;
}

int Tile::get_col()
{
    return col;
}

void Tile::set_type(TYPE type)
{
    this->type = type;
}
