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
    Tile(TYPE type, int row, int col);
    ~Tile();

    TYPE get_type();
    int  get_row();
    int  get_col();

    void set_type(TYPE type);

    static const int width  = 1;
    static const int height = 1;

private:
    TYPE type;
    int  row, col;
};

#endif
