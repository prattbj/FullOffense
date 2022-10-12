#pragma once
#include "Actor.h"
/*
* Holds variables the player needs to have.
*/
class Player : public Actor
{
public:
	Player();
	int getMoney();
	int getDay();
	Player&operator+= (int amount);
	void setDay();
private:
	int money;
	int day;
};

