#ifndef TILE_H
#define TILE_H

class Tile
{
public:
    enum TYPE
    {
        BLANK, SNAKE, FOOD
    };

    Tile();
    ~Tile();

    static const int width  = 1;
    static const int height = 1;

    TYPE type;
};

#endif
