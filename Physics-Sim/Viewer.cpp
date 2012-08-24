#include "Viewer.h"

using namespace PhysicsSim;

Viewer::Viewer(int scr_x, int scr_y)
{
	screen_x = scr_x;
	screen_y = scr_y;

}

Viewer::Viewer() 
{
	screen_x = 800;
	screen_y = 800;
}

bool Viewer::Init()
{
	if(SDL_Init( SDL_INIT_EVERYTHING ) == -1)
	{
		return false;
	}


	//Sets window caption
	SDL_WM_SetCaption( "Eight Minions", NULL );

	screen = SDL_SetVideoMode(screen_x,screen_y,32,SDL_DOUBLEBUF | SDL_HWSURFACE);
	if(screen == NULL)
	{
		return false;
	}


	RunState = 1;
	return true;
}

int Viewer::runSimulation()
{
	Init();

	while(RunState > 0)
	{
		//simulate world
		
		//display scene

		//cap fps
	}
}

void Viewer::DisplayWorld()
{
	//go about blitting all the objects to the screen

	SDL_Flip(screen);
}