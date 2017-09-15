#include "Board.h"

Board::Board()
{
    this->rows = 100;
    this->cols = 100;
}

void Board::draw()
{
    glBegin(GL_QUADS);
        glColor3f(0.05f, 0.25f, 0.05f);
        glVertex2f(0, 0);
        glVertex2f(0, height());
        glVertex2f(width(), height());
        glVertex2f(height(), 0);
    glEnd();
}

int Board::width()
{
    return cols * Tile::width;
}

int Board::height()
{
    return rows * Tile::height;
}
