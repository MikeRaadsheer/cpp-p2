#include "stdafx.h"
#include "Communication.h"

Communication::Communication()
{
}


Communication::~Communication()
{
}

void Communication::Message(std::string name, std::string sentence) {
	std::cout << "<" << name << ">: " << sentence << std::endl;
}