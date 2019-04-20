// ClosetProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <float.h>
#include <math.h>
#include "Drawer.hpp"
#include "Closet.hpp"
#include "Calculator.hpp"

int main()
{
	Closet closet{"Mike's Closet", 5};
	std::list<Drawer*>* drawers = &closet.GetDrawers();

	closet.AddDrawer("shirts", 5);
	closet.AddDrawer("under wear", 5);
	closet.AddDrawer("socks", 10);
	closet.AddDrawer("guns", 2);
	closet.AddDrawer("bullets", 600);
	closet.AddDrawer("spam", 9000);
	closet.AddDrawer("spam", 420);
	closet.AddDrawer("spam", 69);
	closet.AddDrawer("spam", 43);
	closet.AddDrawer("spam", 360);

	std::cout << drawers->size() << std::endl;

	//std::list<Drawer*>::iterator it;
	//for (it = drawers->begin(); it != drawers->end(); ++it) {
		//std::cout << **it->
	//}


	std::cout << "The closet " << closet.GetName() << " has space for " << closet.GetCapacity() << " drawers." << std::endl;
	std::cout << "But " << closet.GetName() << " has " << drawers->size() << " drawers." << std::endl;
 	std::cout << "Press Enter to continue..." << std::endl;

	std::cin.get();

    return 0;
}


	//Calculator *calc = new Calculator();

	//float a;
	//float b;
	//float &ar = a;
	//float &br = b;

	//std::cout << "   ...........................................   " << std::endl;
	//std::cout << " ............................................... " << std::endl;
	//std::cout << "..........  - - - / -- -- -- / - - -   .........." << std::endl;
	//std::cout << " ............................................... " << std::endl;
	//std::cout << "   ...........................................   " << std::endl;
	//std::cout << std::endl;
	//std::cout << std::endl;

	//std::cout << "Please enter a number. (Num 1/2)" << std::endl;
	//std::cin >> a;
	//std::cin.get();
	//std::cout << std::endl;

	//std::cout << "Please enter a number. (Num 2/2)" << std::endl;
	//std::cin >> b;
	//std::cin.get();
	//std::cout << std::endl;


	//std::cout << "a(1/2) : " << a << std::endl;
	//std::cout << "a ref : " << ar << std::endl;
	//std::cout << "b(2/2) : " << b << std::endl;
	//std::cout << "b ref: " << br << std::endl;
	//std::cin.get();

	//std::cout << "Please enter a number. (Num 1/2)" << std::endl;
	//std::cin >> a;
	//std::cin.get();
	//std::cout << std::endl;

	//std::cout << "a(1/2) : " << a << std::endl;
	//std::cout << "a ref : " << ar << std::endl;
	//std::cout << "b(2/2) : " << b << std::endl;
	//std::cout << "b ref: " << br << std::endl;
	//std::cin.get();


	//std::cout << "The result for " << ar << " + " << br << " = " << calc->Plus(a, b) << std::endl;
