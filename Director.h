#pragma once
#include "Cast.h"
#include "Script.h"
/*
* Performs all the tasks that happen each frame.
*/
class Director
{
public:
	Director(Cast cast, Script script);
	void runGame();
private:
	Script script = Script();
	Cast cast = Cast();
	//Outputs stuff to the screen
	void outputs();
	//Gets user inputs
	void inputs();
	//Changes the state of the game
	void updates();
};

