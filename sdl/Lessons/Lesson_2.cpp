#include <stdio.h>
#include <SDL2/SDL.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define TITLE "3D Game Engine"

SDL_Window* gWindow = NULL;
SDL_Surface* gScreenSurface = NULL;
SDL_Surface* gHelloWorld = NULL;

bool init();
bool loadMedia();
void close();

int main(int argc, char** argv)
{
	if(!init())
	{
		printf("Failed to initialize!\n");
		return -1;
	}
	
	if(!loadMedia())
	{
		printf("Failed to load media!\n");
		return -1;
	}
	
	SDL_BlitSurface(gHelloWorld, NULL, gScreenSurface, NULL);
	SDL_UpdateWindowSurface(gWindow);
	SDL_Delay(2000);
	
	close();
	
    return 0;
}

bool init()
{
	if(SDL_Init(SDL_INIT_EVERYTHING) == -1)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		return false;
	}
	
	gWindow = SDL_CreateWindow(TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	if(gWindow == NULL)
	{
		printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		return false;
	}
	
	gScreenSurface = SDL_GetWindowSurface(gWindow);
	
	return true;
}

bool loadMedia()
{
	gHelloWorld = SDL_LoadBMP("res/hello_world.bmp");
	if(gHelloWorld == NULL)
	{
		printf("Unable to load image SDL Error: %s\n", SDL_GetError());
		return false;
	}
	
	return true;
}

void close()
{
	SDL_FreeSurface(gHelloWorld);
    gHelloWorld = NULL;
	
	SDL_DestroyWindow(gWindow);
	gWindow = NULL;
	
	SDL_Quit();
}