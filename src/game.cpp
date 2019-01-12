#include "game.h"

Game::Game()
{
    snake = board.get_snake_ptr();
    window.create();

    running      = true;
    current_time = 0;
    last_time    = 0;
}

Game::~Game()
{
    window.destroy();
}

void Game::handle_events()
{
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        switch (event.type) {
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym) {
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
                        running = false;
                        break;
                    default:
                        break;
                }
                break;
            case SDL_QUIT:
                running = false;
                break;
            default:
                break;
        }
    }
}

void Game::update()
{
    if (!board.is_game_over())
    {
        current_time = SDL_GetTicks();
        if (current_time > last_time + 40)
        {
            board.update();
            last_time = current_time;
        }
    }
}

void Game::render()
{
    board.draw();
    window.update();
}

bool Game::is_running() const
{
    return running;
}
