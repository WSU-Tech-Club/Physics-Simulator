//Class name: BaseObject
//Author:Chris Corboy
//Created: 8/27/12
//Last Revision:8/27/12
//Summary: very basic skeleton for the base class
//

#ifndef BASEOBJECT_H
#define BASEOBJECT_H

#include "Vector.h"

namespace PhysicsSim
{

	class BaseObject
	{
	public:
		BaseObject ();


		PSVect *position;
		PSVect *velocity;
		PSVect *accel;

		double mass;

	};


}
#endif