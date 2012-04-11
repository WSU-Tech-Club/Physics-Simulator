#include "SDL.h"

//Shape Constants
#define PS_CIRCLE 0

//class: PS_Object
//
// physics simulator basic object. 
//
// author: Jeromy Johnson
// date: 4-10-2012
//
//

class PS_Object
{
private:
	double mass;
	SDL_Surface *img;
	int shape;
	bool isStatic;
public:
	PS_Object();
	PS_Object(int nMass);

	~PS_Object();

};