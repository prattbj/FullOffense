#pragma once
#include "Cast.h"
#include "Script.h"
/*
* Performs all the tasks that happen each frame.
*/
class Director
{
public:
	Director();
	void runGame(Cast* cast, Script* script);
private:
	Script script = Script();
	Cast cast = Cast();
	//Outputs stuff to the screen
	void outputs(Cast* cast, Script* script);
	//Gets user inputs
	void inputs(Cast* cast, Script* script);
	//Changes the state of the game
	void updates(Cast * cast, Script * script);
};

