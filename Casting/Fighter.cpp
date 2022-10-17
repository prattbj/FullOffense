#include "Fighter.h"
//Construct a fighter
Fighter::Fighter(char lane, int position)
{
	this->lane = lane;
	this->position = position;
}
//Increase the position of the fighter
void Fighter::move()
{
	this->position++;
}

