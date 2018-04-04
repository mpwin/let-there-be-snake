#include "Tile.h"

Tile::Tile()
{
    this->type = BLANK;
}

Tile::~Tile() {}

Tile::TYPE Tile::get_type()
{
    return type;
}
