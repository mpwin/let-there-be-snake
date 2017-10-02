#include "Tile.h"

namespace Tile
{
    Blank::Blank(int row, int col)
    {
        this->row = row;
        this->col = col;

        this->r = 0.05f;
        this->g = 0.25f;
        this->b = 0.05f;
    }
}
