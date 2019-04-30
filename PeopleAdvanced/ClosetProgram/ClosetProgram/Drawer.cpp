#include "stdafx.h"
#include "Drawer.hpp"


Drawer::Drawer(std::string aCatagory, int aCapacity)
	:catagory(aCatagory), capacity(aCapacity)
{
	catagory = aCatagory;
	capacity = aCapacity;
}


Drawer::~Drawer()
{
}
