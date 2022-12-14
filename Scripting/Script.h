#pragma once
#ifndef SCRIPT_H
#define SCRIPT_H
#include <map>
#include <list>
#include <string>
//I have to make an empty class so that I don't have an infinite include loop
//causing errors
class Action;
/*
* The script holds a list of pointers to all the actions that need to be run.
*/
class Script
{
public:
	Script() {};
	std::list<Action*> getActions(std::string group);
	void addAction(std::string group, Action* action);
private:
	std::map<std::string, std::list<Action*>> script;
};
#endif
