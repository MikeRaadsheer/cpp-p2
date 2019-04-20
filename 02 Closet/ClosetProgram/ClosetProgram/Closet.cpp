#include "stdafx.h"
#include "Closet.hpp"

Closet::Closet(std::string aName, int aCapacity)
	:name(aName), capacity(aCapacity)
{
	drawers = new std::list<Drawer*>();
}


Closet::~Closet()
{
}
