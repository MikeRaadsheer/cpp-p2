#pragma once
#include "Person.h"
#include <iostream>
#include <sstream>
#include <list>
#include "Communication.h"

class Application
{
public:
	Application();
	~Application();

	void Run();

	void AddPerson();

	void Help(std::string _list);
	void HelpCommand(std::string command);
	void GetLists(std::string);
	std::string GetString();
	int GetInt();
	float GetFloat();
private:
	std::list<Person*>* people;
	int peopleCreated;
	int maxPeople;
	bool runState;
};

