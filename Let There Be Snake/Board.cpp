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
                case Tile::BLANK : glColor3f(0.05f, 0.25f, 0.05f);
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
