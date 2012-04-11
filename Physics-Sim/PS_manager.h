#include "PS_Object.h"
#include <vector>

using std::vector;

//Physics Simulator manager
//
// this class contains all the objects being simulated and performs the required calculations on then each iteration
//
// author: Jeromy Johnson
// date: 4-10-12
//

class PS_manager
{
private:
	vector<PS_Object*> objects;

public:
	PS_manager();
	PS_manager(int scr_x, int scr_y); //scr_x and scr_y are the width and height of the screen, respectively

	int runSimulation();

	void update();
};