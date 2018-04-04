#include "Board.h"
#include "Snake.h"
#include "Window.h"
#include <glew.h>
#include <SDL.h>
#include <cstdlib>

int main(int argc, char *argv[])
{
    Window window;
    Board  board;
    Snake  *snake = board.get_snake_ptr();

    window.create();

    int  current_time = 0;
    int  last_time    = 0;
    bool quit         = false;

    while (!quit)
    {
        SDL_Event event;

        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                case SDLK_UP:
                case SDLK_w:
                    snake->face_up();
                    break;
                case SDLK_DOWN:
                case SDLK_s:
                    snake->face_down();
                    break;
                case SDLK_LEFT:
                case SDLK_a:
                    snake->face_left();
                    break;
                case SDLK_RIGHT:
                case SDLK_d:
                    snake->face_right();
                    break;
                case SDLK_ESCAPE:
                    quit = true;
                    break;
                default:
                    break;
                }
                break;
            case SDL_QUIT:
                quit = true;
                break;
            default:
                break;
            }
        }

        if (!board.is_game_over())
        {
            current_time = SDL_GetTicks();
            if (current_time > last_time + 40)
            {
                board.update();
                last_time = current_time;
            }
        }

        board.draw();
        window.update();
    }

    window.destroy();
    return EXIT_SUCCESS;
}
