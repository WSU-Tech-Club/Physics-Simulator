#include "BaseObject.h"
using namespace PhysicsSim;

BaseObject::BaseObject()
{
	position = new PSVect();
	velocity = new PSVect();
	accel = new PSVect();
	mass = 0;
}