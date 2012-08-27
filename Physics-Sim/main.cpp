#include "Viewer.h"

using namespace PhysicsSim;

int main(int argc, char** argv)
{
	Viewer *v = new Viewer();
	v->runSimulation();
	return 0;
}