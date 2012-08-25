namespace PhysicsSim
{

	//Vector class for keeping track of position, velocity, acceleration, etc.
	//Author: Haily Holt
	//Created: 8/24/12
	class PSVect
	{
	public:
		PSVect();
		PSVect(double xCoord, double yCoord, double zCoord );
		PSVect operator+ (PSVect &rhs);
		PSVect operator- (PSVect &rhs);
		PSVect operator* (double scale);
		PSVect operator* (PSVect &rhs);
		PSVect operator/ (double scale);
		PSVect & operator= (PSVect &rhs);
	private:
		double x;
		double y;
		double z;
	};
}