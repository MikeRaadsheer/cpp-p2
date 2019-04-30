#pragma once
#include <string>
class Degree
{
public:
	Degree(std::string _degree, std::string _expirationDate);
	~Degree();

	void SetDegree(std::string _degree);
	void SetExpireDate(std::string _date);

	std::string GetDegree();
	std::string GetExpireDate();

private:
	std::string degree;
	std::string expirationDate;
};

