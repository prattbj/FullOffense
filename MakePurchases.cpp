#include "MakePurchases.h"
#include "Player.h"
#include "Gatherer.h"
void MakePurchases::execute(Cast cast, Script script)
{
	//Give options for the user to do things
	bool stillBuying = true;
	while (stillBuying)
	{
		for (Actor * actor : cast.getActors("Player"))
		{
			Player* player = (Player*)actor;
			std::cout << "Your current money: " << player->getMoney() << std::endl;


			std::cout << "What would you like to buy?" << std::endl;
			std::cout << "0. End Day\n1. Fighter - $20\n2. Villager - $10\n";
			int selection;
			std::cin >> selection;
			switch (selection)
			{
			case 0:
				stillBuying = false;
				*player+= 10;
				break;
			case 1:
			{
				if (player->getMoney() >= 20)
				{
					std::cout << "Which lane should it go down?" << std::endl;
					std::cout << "T. Top\nM. Mid\nB. Bottom\n";
					char lane;
					std::cin >> lane;
					Fighter fighter = Fighter(tolower(lane));
					cast.addActor("Fighter", &fighter);
					*player += -20;
				}
				else
				{
					std::cout << "You do not have enough money." << std::endl;
				}
				break;
			}
			case 2:
			{
				if (player->getMoney() >= 10)
				{
					std::cout << "Which lane should it go down?" << std::endl;
					std::cout << "T. Top\nB. Bottom\n";
					char lane;
					std::cin >> lane;
					Gatherer gatherer = Gatherer(tolower(lane));
					cast.addActor("Gatherer", &gatherer);
					*player += -10;
				}
				else
				{
					std::cout << "You do not have enough money." << std::endl;
				}
				break;
			}
			}
		}
	}

	
	
}