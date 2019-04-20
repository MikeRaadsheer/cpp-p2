#pragma once
#include <list>
#include "Drawer.hpp"

class Closet
{
public:
	Closet(std::string name, int capacity);
	~Closet();
private:
	int capacity;
	std::string name;

	std::list<Drawer*> *drawers;
};