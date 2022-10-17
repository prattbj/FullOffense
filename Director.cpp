#include "Director.h"
#include "Player.h"
#include <iterator>
#include "Action.h"
Director::Director()
{

}
//Execute everything each frame until the game ends
void Director::runGame(Cast * cast, Script * script)
{
	bool stillPlaying = true;
	while (stillPlaying)
	{
		updates(cast,  script);
		outputs(cast, script);
		inputs(cast, script);
	}
}

void Director::outputs(Cast * cast, Script * script)
{
	for (Action* it : script->getActions("Outputs"))
	{
		it->execute(cast, script);
	}
}

void Director::updates(Cast* cast, Script* script)
{
	for (Action* it : script->getActions("Updates"))
	{
		it->execute(cast, script);
	}
}

void Director::inputs(Cast* cast, Script* script)
{
	for (Action* it : script->getActions("Inputs"))
	{
		it->execute(cast, script);
	}
}

