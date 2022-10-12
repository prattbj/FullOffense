#include "Player.h"
//Construct the player
Player::Player()
{
	this->money = 100;
	this->day = 1;
}
//Return the player's current money
int Player::getMoney()
{
	return this->money;
}
//Return the current day
int Player::getDay()
{
	return this->day;
}
//Change the player's money
Player& Player::operator+=(int amount)
{
	this->money += amount;
	return *this;
}
//Increase the current day
void Player::setDay()
{
	this->day++;
}