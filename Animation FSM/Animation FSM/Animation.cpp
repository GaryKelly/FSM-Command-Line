#include "Animation.h"

Animation::Animation()
{
	current = new Idle();
}

void Animation::idle()
{
	current->Idle(this);
}

void Animation::jumping()
{
	current->Jumping(this);
}

void Animation::climbing()
{
	current->climbing(this);
}
