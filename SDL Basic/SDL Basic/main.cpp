#include <iostream>
#include <SDL.h>

int main(int argc, char *argv[])
{
	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cout << "SDL init failed\n";
		return 1;
	}

	SDL_Window *window = SDL_CreateWindow("Particle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	//SDL_Quit();
	std::cin.get();
	return 0;
}