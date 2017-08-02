#include "board.h"

Board::Board()
{
    this->width  = 100;
    this->height = 100;
}

void Board::draw()
{
    glBegin(GL_QUADS);
        glColor3f(0.05f, 0.25f, 0.05f);
        glVertex2f(0, 0);
        glVertex2f(0, height);
        glVertex2f(width, height);
        glVertex2f(width, 0);
    glEnd();
}
