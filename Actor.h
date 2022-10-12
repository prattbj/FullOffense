#pragma once
#ifndef ACTOR_H
#define ACTOR_H
/*
* Contains attributes all actors will have.
*/
class Actor
{
public:
	//returns the lane
	char getLane();
	//return the position
	int getPosition();
protected:
	int position;
	char lane;
};
#endif