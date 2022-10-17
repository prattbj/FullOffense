#include "MoveActors.h"
#include "Gatherer.h"
void MoveActors::execute(Cast* cast, Script* script)
{
	//Move the fighters and gatherers
	for (Actor* actor : cast->getActors("Fighter"))
	{
		Fighter* fighter = (Fighter*)actor;
		fighter->move();
	}
	for (Actor* actor : cast->getActors("Gatherer"))
	{
		Gatherer* gatherer = (Gatherer*)actor;
		gatherer->move();
	}
}