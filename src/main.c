#include <stdio.h>
#include "SDL2/SDL.h"

int main(int argc, char** argv) {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window = SDL_CreateWindow(
        "Chip8 Window",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640, 320, SDL_WINDOW_SHOWN
    );

    while(1) {
        
    }

    printf("Hello world!!!!\n");

    SDL_DestroyWindow(window);
    return 0;
}