#pragma once
#include "Actor.h"
/*
* Huts to be built in certain positions so that gatherers can get resources.
*/
class ResourceHut : public Actor
{
public:
	ResourceHut(int position, int lane) { this->position = position; this->lane = lane; this->isBuilt = false; }
	void build() { this->isBuilt = true; }
private:
	bool isBuilt;
};

