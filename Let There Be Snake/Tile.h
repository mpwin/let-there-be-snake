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

    TYPE get_type();

    static const int width  = 1;
    static const int height = 1;

private:
    TYPE type;
};

#endif
