#include "Viewer.h"

int main(int argc, char *argv[])
{
	PhysicsSim::Viewer *v = new PhysicsSim::Viewer();
	v->runSimulation();
	return 0;
}