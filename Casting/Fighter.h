#pragma once
#include "Actor.h"
/*
* Inherits the actor, adding a move() method and a constructor
*/
class Fighter : public Actor
{
public:
	Fighter(char lane, int position = 0);
	//Increase the position of the fighter
	void move();
};

