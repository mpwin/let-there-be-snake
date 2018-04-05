#include "window.h"

Window::Window()  {}
Window::~Window() {}

void Window::create()
{
    SDL_Init(SDL_INIT_VIDEO);
    this->window = SDL_CreateWindow(
        Window::title,
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        Window::width,
        Window::height,
        SDL_WINDOW_OPENGL
    );
    SDL_GL_CreateContext(window);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, Board::width, 0, Board::height, 0, 1);
}

void Window::update()
{
    SDL_GL_SwapWindow(this->window);
}

void Window::destroy()
{
    SDL_DestroyWindow(this->window);
    SDL_Quit();
}
