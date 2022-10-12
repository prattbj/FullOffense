#pragma once
#include "Action.h"
#include <string>
/*
* Draws everything on the board
*/
class DrawBoard : public Action
{
public: 
	virtual void execute(Cast cast, Script script);
};

