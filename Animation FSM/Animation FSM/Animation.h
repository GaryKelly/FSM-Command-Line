



class State;

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

#include "State.h"
#include "jumping.h"
#include "Climbing.h"
#include "Idle.h"