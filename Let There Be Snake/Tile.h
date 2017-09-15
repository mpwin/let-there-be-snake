#ifndef TILE_H
#define TILE_H

class Tile
{
public:
    Tile(int row, int col);

    static const int width  = 1;
    static const int height = 1;

private:
    int row, col;
};

#endif
