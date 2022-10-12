#include "Gatherer.h"
//Construct the gatherer
Gatherer::Gatherer(char lane, int position)
{
	this->hasMoney = false;
}
//Move the gatherer
void Gatherer::move()
{
	if (hasMoney)
	{
		this->position--;
	}
	else 
	{
		this->position++;
	}
}