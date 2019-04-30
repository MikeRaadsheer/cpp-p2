#pragma once
#include <list>
#include "Drawer.hpp"

class Closet
{
public:
	Closet(std::string aName, int aCapacity);
	~Closet();
	
	void AddDrawer(std::string aCatagory, int aCapacity) {
		if (isless(GetDrawers().size(), capacity)) {
			Drawer* aDrawer = new Drawer { aCatagory, aCapacity };
			drawers->push_back(aDrawer);
		}
	}

	std::string GetName() {
		return name; 
	}
	
	void SetName(std::string aName) {
		name = aName;
	}

	int GetCapacity() {
		return capacity; 
	}
	
	std::list<Drawer*> GetDrawers() {
		return *drawers; 
	}

private:
	std::string name;
	int capacity;
	std::list<Drawer*>* drawers;

};