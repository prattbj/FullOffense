#include "Director.h"
#include "Player.h"
#include <iterator>
#include "Action.h"
Director::Director(Cast cast, Script script)
{
	this->cast = cast;
	this->script = script;
}
//Execute everything each frame until the game ends
void Director::runGame()
{
	bool stillPlaying = true;
	while (stillPlaying)
	{
		updates();
		outputs();
		inputs();
	}
}

void Director::outputs()
{
	for (Action* it : script.getActions("Outputs"))
	{
		it->execute(this->cast, this->script);
	}

}

void Director::updates()
{
	for (Action* it : script.getActions("Updates"))
	{
		it->execute(this->cast, this->script);
	}
}

void Director::inputs()
{
	for (Action* it : script.getActions("Inputs"))
	{
		it->execute(this->cast, this->script);
	}
}

