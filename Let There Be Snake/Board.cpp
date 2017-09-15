#include "Board.h"

Board::Board()  {}
Board::~Board() {}

void Board::draw()
{
    glBegin(GL_QUADS);
        glColor3f(0.05f, 0.25f, 0.05f);
        glVertex2f(0, 0);
        glVertex2f(0, width);
        glVertex2f(width, height);
        glVertex2f(height, 0);
    glEnd();
}
