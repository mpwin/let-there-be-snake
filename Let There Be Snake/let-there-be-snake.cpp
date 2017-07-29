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

    SDL_Delay(3000);

    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}
