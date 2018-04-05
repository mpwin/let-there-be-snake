#include "board.h"

Board::Board()
{
    add_food();
    this->game_over = false;
}

Board::~Board() {}

void Board::add_food()
{
    srand(time(NULL));

    while (true)
    {
        int row = rand() % rows;
        int col = rand() % cols;

        for (Tile tile : snake.get_tiles())
        {
            if (tile.get_row() == row && tile.get_col() == col)
            {
                continue;
            }
        }

        this->food = Tile(row, col);
        break;
    }
}

void Board::check_game_over()
{
    if (snake.get_row() < 0 || rows <= snake.get_row() ||
        snake.get_col() < 0 || cols <= snake.get_col())
    {
        this->game_over = true;
        return;
    }

    for (int i = 1; i < snake.get_tiles().size(); i++)
    {
        if (snake.get_tiles()[i].get_row() == snake.get_row() &&
            snake.get_tiles()[i].get_col() == snake.get_col())
        {
            this->game_over = true;
            return;
        }
    }
}

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
                case Tile::FOOD  : glColor3f(0.73f, 0.19f, 0.18f);
                                   break;
                case Tile::SNAKE : glColor3f(0.09f, 0.18f, 0.49f);
                                   break;
                default:           break;
                }

                glVertex2f(col,               row);
                glVertex2f(col,               row + Tile::height);
                glVertex2f(col + Tile::width, row + Tile::height);
                glVertex2f(col + Tile::width, row);
            glEnd();
        }
    }
}

bool Board::is_game_over()
{
    return game_over;
}

void Board::update()
{
    if (snake.is_moving())
    {
        snake.move();
    }

    check_game_over();

    if (game_over)
    {
        return;
    }

    if (snake.get_row() == food.get_row() &&
        snake.get_col() == food.get_col())
    {
        snake.eat();
        add_food();
    }

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

    tiles[food.get_row()][food.get_col()].set_type(Tile::FOOD);
}

Snake *Board::get_snake_ptr()
{
    return &snake;
}
