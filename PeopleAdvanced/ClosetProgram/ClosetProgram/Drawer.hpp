#pragma once
#include <string>

class Drawer
{
public:
	Drawer(std::string aCatagory, int aCapacity);
	~Drawer();

	std::string GetCatagory() {
		return catagory;
	}

	void SetCatagory(std::string aCatagory) {
		catagory = aCatagory;
	}

	int GetCapacity() {
		return capacity;
	}

	void SetCapacity(int aCapacity) {
		capacity = aCapacity;
	}

private:
	std::string catagory;
	int capacity;
};

