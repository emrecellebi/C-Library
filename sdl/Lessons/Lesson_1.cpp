#include <stdio.h>
#include <SDL2/SDL.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define TITLE "3D Game Engine"

int main(int argc, char** argv)
{
	SDL_Window* window = NULL;
	SDL_Surface* screen = NULL;
	
	if(SDL_Init(SDL_INIT_EVERYTHING) == -1)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		return -1;
	}
	
	window = SDL_CreateWindow(TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	if(window == NULL)
	{
		printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		return -1;
	}
	
	screen = SDL_GetWindowSurface(window);
	
	SDL_FillRect(screen, NULL, SDL_MapRGB(screen -> format, 0x00, 0x00, 0xff));
	
	SDL_UpdateWindowSurface(window);
	SDL_Delay(2000);
	
	SDL_DestroyWindow(window);
	SDL_Quit();
	
    return 0;
}