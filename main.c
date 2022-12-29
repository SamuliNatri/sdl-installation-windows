#include <stdio.h>
#include <SDL.h>

int main(int argc, char *argv[]) {
	
    SDL_Init(SDL_INIT_VIDEO);
    
    SDL_Window *Window = 
        SDL_CreateWindow("Title",
                         SDL_WINDOWPOS_CENTERED,
                         SDL_WINDOWPOS_CENTERED,
                         640, 640, 0);
    
    int Running = 1;
    
    SDL_Event Event = {0};
    
    while(Running) {
        while(SDL_PollEvent(&Event)) {
            switch(Event.type) {
                case SDL_QUIT: { Running = 0; } break;
                case SDL_KEYDOWN: { 
                    switch(Event.key.keysym.sym) {
                        case SDLK_o: { Running = 0; } break;
                    }
                } break;
            }
        }
    }
    
    SDL_Quit();
    
	return 0;
}
