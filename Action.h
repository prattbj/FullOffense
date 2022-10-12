#pragma once
#ifndef ACTION_H
#define ACTION_H
#include "Cast.h"
#include "Script.h"
//A thing that happens.
class Action
{
public:
	virtual void execute(Cast cast, Script script) {};
};

#endif