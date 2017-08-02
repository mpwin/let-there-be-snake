#ifndef SNAKE_H
#define SNAKE_H

class Snake
{
public:
    Snake();

    enum DIRECTION
    {
        UP, DOWN, LEFT, RIGHT
    };

private:
    DIRECTION direction;
    int       length;
    bool      moving;
};

#endif SNAKE_H
