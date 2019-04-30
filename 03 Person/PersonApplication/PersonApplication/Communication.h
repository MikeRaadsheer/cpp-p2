#pragma once
#include <string>
#include "Person.h"
#include <iostream>

class Communication
{
public:
	Communication();
	~Communication();
	void Message(std::string name, std::string sentence);
};

