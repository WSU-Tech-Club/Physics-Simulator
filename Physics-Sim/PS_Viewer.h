#include "SDL.h"
#include <vector>

using std::vector;

//Physics Simulator manager
//
// this class contains all the objects being simulated and performs the required calculations on then each iteration
//
// author: Jeromy Johnson
// date: 4-10-12
//

class PS_Viewer
{
private:
	SDL_Surface *screen;

	int screen_x;
	int screen_y;

public:
	PS_Viewer();
	PS_Viewer(int scr_x, int scr_y); //scr_x and scr_y are the width and height of the screen, respectively

	bool Init();

	int runSimulation();

	void update();
};