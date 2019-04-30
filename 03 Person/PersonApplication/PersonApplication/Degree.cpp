#include "stdafx.h"
#include "Degree.h"


Degree::Degree(std::string _degree, std::string _expirationDate)
	: degree(_degree), expirationDate(_expirationDate)
{
	degree = _degree;
	expirationDate = _expirationDate;
}

Degree::~Degree()
{
}

void Degree::SetDegree(std::string _degree)
{
	degree = _degree;
}

void Degree::SetExpireDate(std::string _date)
{
	expirationDate = _date;
}

std::string Degree::GetDegree()
{
	return degree;
}

std::string Degree::GetExpireDate()
{
	return expirationDate;
}
