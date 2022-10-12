#pragma once
#include "Action.h"
//Moves all the actors that need to be moved.
class MoveActors : public Action
{
public:
	virtual void execute(Cast cast, Script script);
};

