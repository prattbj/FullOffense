#include "DrawBoard.h"
#include "Fighter.h"
#include <string>
#include <iostream>
void DrawBoard::execute(Cast* cast, Script* script)
{
	//These hold an amount of fighters in each location
	//in each lane
	int top[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int mid[6] = { 0, 0, 0, 0, 0, 0};
	int bot[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int passed = 0;
	//For each fighter, increment the number in the position
	for (Actor* fighter : cast->getActors("Fighter"))
	{
		switch (fighter->getLane())
		{
			case 't':
			{
				top[fighter->getPosition()]++;
				break;
			}
			case 'm':
			{
				mid[fighter->getPosition()]++;
				break;
			}
			case 'b':
			{
				bot[fighter->getPosition()]++;
				break;
			}
			default:
				passed++;

		}
	}
	//Output the position of everything
	std::cout << "Top: ";
	for (int i : top)
	{
		std::cout << "|" << i << "|";
	}
	std::cout << std::endl;
	std::cout << "Mid: ";
	for (int i : mid)
	{
		std::cout << "|" << i << "|";
	}
	std::cout << std::endl;
	std::cout << "Bot: ";
	for (int i : bot)
	{
		std::cout << "|" << i << "|";
	}
	std::cout << std::endl;
}