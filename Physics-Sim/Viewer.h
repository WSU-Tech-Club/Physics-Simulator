#include "SDL.h"
#include <vector>

using std::vector;

//Physics Simulator Viewer
//
// Graphical Viewer for the physics simulator engine.
//
// author: Jeromy Johnson
// date: 4-10-12
// revised: 8-24-12

namespace PhysicsSim
{

class Viewer
{
private:
	SDL_Surface *screen;

	//Some sort of world object needed here, something that manages all the objects to be simulated

	int screen_x;
	int screen_y;

	int RunState;

public:
	Viewer();
	Viewer(int scr_x, int scr_y); //scr_x and scr_y are the width and height of the screen, respectively

	bool Init();

	int runSimulation();

	void DisplayWorld();
};
}