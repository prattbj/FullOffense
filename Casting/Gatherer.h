#pragma once
#include "Fighter.h"
/*
* A gatherer that goes to resource huts and returns to the base to drop off money
*/
class Gatherer : public Actor
{
public:
	Gatherer(char lane, int position = 0);
	//Moves the gatherer either forward or backward depending on if it has money to return with
	void move();
private:
	bool hasMoney;
};

