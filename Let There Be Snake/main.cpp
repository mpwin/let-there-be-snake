#include "Board.h"
#include "Window.h"
#include <glew.h>
#include <SDL.h>
#include <cstdlib>

int main(int argc, char *argv[])
{
    Window window;
    Board  board;

    window.create();

    bool quit = false;

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

        board.update();
        board.draw();
        window.update();
    }

    window.destroy();
    return EXIT_SUCCESS;
}
