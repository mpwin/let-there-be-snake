#ifndef TILE_H
#define TILE_H

namespace Tile
{
    static const int width  = 1;
    static const int height = 1;

    class Base
    {
    protected:
        int   row, col;
        float r, g, b;
    };

    class Blank : public Base
    {
    public:
        Blank(int row, int col);
    };
}

#endif
