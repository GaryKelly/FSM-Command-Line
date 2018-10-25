#include "Climbing.h"
 

void Climbing::idle(Animation * a)
{
	std::cout << "Going from climbing to Idle\n";
	a->setCurrent(new Idle());
	delete this;
}
