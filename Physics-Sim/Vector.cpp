#include "Vector.h"

using namespace PhysicsSim;

PSVect::PSVect()
{
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

PSVect::PSVect( double xCoord, double yCoord, double zCoord )
{
	x = xCoord;
	y = yCoord;
	z = zCoord;
}

PSVect PSVect::operator+( PSVect &rhs )
{
	PSVect result;

	result.x = x + rhs.x;
	result.y = y + rhs.y;
	result.z = z + rhs.z;

	return result;
}

PSVect PSVect::operator-( PSVect &rhs )
{
	PSVect result;

	result.x = x - rhs.x;
	result.y = y - rhs.y;
	result.z = z - rhs.z;

	return result;
}

PSVect PSVect::operator*( double scale )
{
	PSVect result;

	result.x = x * scale;
	result.y = y * scale;
	result.z = z * scale;

	return result;
}

//Cross Product
PSVect PSVect::operator*( PSVect &rhs )
{
	PSVect result;

	result.x = (y * rhs.z) - (z * rhs.y);
	result.y = (z * rhs.x) - (x * rhs.z);
	result.z = (x * rhs.y) - (y * rhs.x);

	return result;
}

PSVect PSVect::operator/( double scale )
{
	PSVect result;

	result.x = x * scale;
	result.y = y * scale;
	result.z = z * scale;

	return result;
}

PSVect & PSVect::operator=( PSVect &rhs )
{
	if (this != &rhs)
	{
		x = rhs.x;
		y = rhs.y;
		z = rhs.z;
	}

	return (*this);
}
