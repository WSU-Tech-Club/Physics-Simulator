#include "Viewer.h"

using namespace PhysicsSim;

Viewer::Viewer(int scr_x, int scr_y)
{
	screen_x = scr_x;
	screen_y = scr_y;
	RunState = -1;
}

Viewer::Viewer() 
{
	screen_x = 800;
	screen_y = 800;
	RunState = -1;
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
	if(RunState < 1)
		Init();

	while(RunState > 0)
	{
		//update world
		//environment->updateAllObjects(); or something to that effect
		
		DisplayWorld();

		//cap fps
	}

	return 0;
}

void Viewer::DisplayWorld()
{
	//go about blitting all the objects to the screen

	SDL_Flip(screen);
}

//Information on drawing shapes:
//http://aaroncox.net/tutorials/2dtutorials/sdlshapes.html