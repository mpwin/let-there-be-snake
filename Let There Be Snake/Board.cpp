#include "Board.h"

Board::Board()  {}
Board::~Board() {}

void Board::draw()
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            glBegin(GL_QUADS);
                switch(tiles[row][col].get_type())
                {
                case Tile::BLANK : glColor3f(0.34f, 0.6f, 0.2f);
                                   break;
                case Tile::SNAKE : glColor3f(0.09f, 0.18f, 0.49f);
                                   break;
                }

                glVertex2f(col,               row);
                glVertex2f(col,               row + Tile::height);
                glVertex2f(col + Tile::width, row + Tile::height);
                glVertex2f(col + Tile::width, row);
            glEnd();
        }
    }
}

void Board::update()
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            tiles[row][col].set_type(Tile::BLANK);
        }
    }

    for (Tile tile : snake.get_tiles())
    {
        tiles[tile.get_row()][tile.get_col()].set_type(Tile::SNAKE);
    }
}
