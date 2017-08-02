#include <cstdlib>

#include <glew.h>
#include <SDL.h>

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow(
        "Snake",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        1024,
        768,
        SDL_WINDOW_OPENGL
    );
    SDL_GL_CreateContext(window);
    SDL_Event event;

    bool quit = false;

    while (!quit)
    {
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

        glClearColor(0, 0, 0, 0);
        glClear(GL_COLOR_BUFFER_BIT);
        SDL_GL_SwapWindow(window);
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}
