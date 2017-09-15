#ifndef WINDOW_H
#define WINDOW_H

#include <glew.h>
#include <SDL.h>

class Window
{
public:
    Window();
    ~Window();

    void create();
    void update();
    void destroy();

private:
    SDL_Window *window;

    static constexpr const char* title = "Let There Be Snake";
    static const int width  = 720;
    static const int height = 720;
};

#endif
