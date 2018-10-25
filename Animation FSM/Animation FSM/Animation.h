#ifndef ANIMATION_H
#define ANIMATION_H
#include "State.h"
#include "Idle.h"

class Idle;
class Jumping;
class Climbing;

class Animation
{
	class State * current;

public:
	Animation();
	void setCurrent(State* s) { current = s; };
	void idle();
	void jumping();
	void climbing();

};


#endif // !ANIMATION_H
