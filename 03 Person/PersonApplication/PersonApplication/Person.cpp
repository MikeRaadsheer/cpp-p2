#include "stdafx.h"
#include "Person.h"


Person::Person(int _ID, std::string _firstName, std::string _lastName, int _age, bool _gender)
	: ID(_ID), firstName(_firstName), lastName(_lastName), age(_age), isMale(_gender)
{
	ID = _ID;
	firstName = _firstName;
	lastName = _lastName;
	age = _age;
	isMale = _gender;
	hunger = 100;
	thirst = 100;
	com = new Communication();
}

Person::~Person()
{
}

void Person::Message(std::string sentence)
{
	com->Message(GetName(), sentence);
}

void Person::Eat()
{
	hunger += 10;
}

void Person::Drink()
{
	thirst += 10;
}

void Person::GetStats()
{
	std::string _gen;
	std::string _tat;
	std::string _pie;
	std::string _smo;

	if(GetGender() == true)
	{
		_gen = "Male";
	}
	else
	{
		_gen = "Female";
	}


	std::cout << "\nID: " << ID << " | Name: " << GetName() << "\n\n";

	std::cout << "ID:              " << ID << "\n";
	std::cout << "First Name:      " << firstName << "\n";
	std::cout << "Last Name:       " << lastName << "\n";
	std::cout << "Age:             " << age << "\n";
	std::cout << "Weight:          " << weight << "\n";
	std::cout << "Height:          " << height << "\n";
	std::cout << "Gender:          " << _gen << "\n\n";
	std::cout << "Eye Color:       " << eyeColor << "\n";
	std::cout << "Hair Color:      " << hairColor << "\n";
	std::cout << "Nationality:     " << nationality << "\n";
	std::cout << "Religion:        " << religion << "\n";
	std::cout << "Blood Type:      " << bloodType << "\n";
	std::cout << "Star Sign:       " << starSign << "\n";

	if (hasTats)
	{
		_tat = "Yes.";
	}
	else
	{
		_tat = "No.";
	}

	if (isPierced) {
		_pie = "Yes.";
	}
	else
	{
		_pie = "No.";
	}

	if (smokes) {
		_smo = "Yes.";
	}
	else
	{
		_smo = "No.";
	}


	std::cout << "Has Tattoo(s)?:  " << _tat << "\n";
	std::cout << "Is Pierced?:     " << _pie << "\n";
	std::cout << "Smokes:          " << _smo << "\n";


	if (degrees->size() <= 0)
	{
		std::cout << "Degree's:        N/A\n\n";
	}
	else
	{
		std::cout << "Degree's:        " << degrees->size() << "\n\n";

		for (std::list<Degree*>::iterator it = degrees->begin(); it != degrees->end(); ++it)
		{		
			std::cout << "Degree: " << (*it)->GetDegree() << " | Expiration Date: " << (*it)->GetExpireDate() << "\n";
		}
		std::cout << std::endl;
	}
}

int Person::GetID()
{
	return ID;
}

std::string Person::GetName()
{
	return firstName + " " + lastName;
}

std::string Person::GetFirstName()
{
	return firstName;
}

std::string Person::GetLastName()
{
	return lastName;
}

int Person::GetAge()
{
	return age;
}

float Person::GetWeight()
{
	return weight;
}

float Person::GetHeight()
{
	return height;
}

std::string Person::GetEyeColor()
{
	return eyeColor;
}

std::string Person::GetHairColor()
{
	return hairColor;
}

std::string Person::GetNationality()
{
	return nationality;
}

std::string Person::GetReligion()
{
	return religion;
}

std::string Person::GetBloodType()
{
	return bloodType;
}

std::string Person::GetStarSign()
{
	return starSign;
}

float Person::GetHunger()
{
	return hunger;
}

float Person::GetThirst()
{
	return thirst;
}

bool Person::GetTats()
{
	return hasTats;
}

bool Person::GetPierced()
{
	return isPierced;
}

bool Person::GetSmokes()
{
	return smokes;
}

bool Person::GetGender()
{
	return isMale;
}

std::list<Degree*> Person::GetDegrees()
{
	return *degrees;
}

void Person::ListDegrees() {
	for (std::list<Degree*>::iterator it = degrees->begin(); it != degrees->end(); it++)
	{
		std::cout << "Degree: " << (*it)->GetDegree() << " | Expiration Date: " << (*it)->GetExpireDate() << "\n";
	}
}

void Person::SetID(int _ID)
{
	ID = _ID;
}

void Person::SetFirstName(std::string _name)
{
	firstName = _name;
}

void Person::SetLastName(std::string _name)
{
	lastName = _name;
}

void Person::SetAge(int _age)
{
	age = _age;
}

void Person::SetWeight(float _weight)
{
	weight = _weight;
}

void Person::SetHeight(float _height)
{
	height = _height;
}

void Person::SetEyeColor(std::string _eyeColor)
{
	eyeColor = _eyeColor;
}

void Person::SetHairColor(std::string _hairColor)
{
	hairColor = _hairColor;
}

void Person::SetNationality(std::string _nationality)
{
	nationality = _nationality;
}

void Person::SetReligion(std::string _religion)
{
	religion = _religion;
}

void Person::SetBloodType(std::string _bloodType)
{
	bloodType = _bloodType;
}

void Person::SetStarSign(std::string _starSign)
{
	starSign = _starSign;
}

void Person::SetHunger(float _hunger)
{
	hunger = _hunger;
}

void Person::SetThirst(float _thirst)
{
	thirst = _thirst;
}

void Person::SetTats(bool _tats)
{
	hasTats = _tats;
}

void Person::SetPierced(bool _pierced)
{
	isPierced = _pierced;
}

void Person::SetSmokes(bool _smokes)
{
	smokes = _smokes;
}

void Person::SetGender(bool _isMale)
{
	isMale = _isMale;
}

void Person::AddDegree(std::string _degree, std::string _expirationDate)
{
	Degree* _deg = new Degree(_degree, _expirationDate);

	degrees->push_back(_deg);
}

void Person::RemoveDegree(std::string _degree)
{
	for (std::list<Degree*>::iterator it = degrees->begin(); it != degrees->end(); it++)
	{
		if ((*it)->GetDegree() == _degree)
		{
			degrees->erase(it);
			break;
		}
	}
}