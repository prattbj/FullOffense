/*
* Benjamin Pratt
*/

#include "director.h"
#include "Cast.h"
#include "Script.h"
#include "Player.h"
#include "DrawBoard.h"
#include "ResourceHut.h"
#include "MakePurchases.h"
#include "MoveActors.h"
/*
* Main will create the objects necessary for the game to run and then call the game loop.
*/
int main()
{
	Cast cast = Cast();
	Script script = Script();
	Player player = Player();
	ResourceHut hut1 = ResourceHut(4, 't');
	ResourceHut hut2 = ResourceHut(8, 't');
	ResourceHut hut3 = ResourceHut(4, 'b');
	ResourceHut hut4 = ResourceHut(8, 'b');
	cast.addActor("Hut", &hut1);
	cast.addActor("Hut", &hut2);
	cast.addActor("Hut", &hut3);
	cast.addActor("Hut", &hut4);
	cast.addActor("Player", &player);
	DrawBoard drawBoard = DrawBoard();
	MakePurchases makePurchases = MakePurchases();
	MoveActors moveActors = MoveActors();
	script.addAction("Outputs", &drawBoard);
	script.addAction("Inputs", &makePurchases);
	script.addAction("Updates", &moveActors);
	Director director = Director();
	//Run the game loop
	director.runGame(&cast, &script);


	return 0;
}