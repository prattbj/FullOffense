#pragma once
#include "Action.h"
#include <iostream>
//Gives the user options to do.
class MakePurchases : public Action
{
	virtual void execute(Cast cast, Script script);
};

