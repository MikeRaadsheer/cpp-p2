#pragma once
#include "Communication.h"
#include "Degree.h"
#include <list>

class Person
{
public:
	Person(int _ID, std::string _firstName, std::string _lastName, int _age,bool _gender);
	~Person();

	
	void Eat(); // add to hunger;
	void Drink(); // add to hunger;
	void Message(std::string sentence); // Say's something in console


	// Getters
	void GetStats();
	int GetID();
	std::string GetName(); // returns "Firstname Lastname"
	std::string GetFirstName();
	std::string GetLastName();
	int GetAge();
	float GetWeight();
	float GetHeight();
	std::string GetEyeColor();
	std::string GetHairColor();
	std::string GetNationality();
	std::string GetReligion();
	std::string GetBloodType();
	std::string GetStarSign();
	float GetHunger();
	float GetThirst();
	bool GetTats();
	bool GetPierced();
	bool GetSmokes();
	bool GetGender();
	std::list<Degree*> GetDegrees();
	void ListDegrees();
						   
	// Setters
	void SetID(int _ID);
	void SetFirstName(std::string _name);
	void SetLastName(std::string _name);
	void SetAge(int _age);
	void SetWeight(float _weight);
	void SetHeight(float _height);
	void SetEyeColor(std::string _eyeColor);
	void SetHairColor(std::string _hairColor);
	void SetNationality(std::string _nationality);
	void SetReligion(std::string _religion);
	void SetBloodType(std::string _bloodType);
	void SetStarSign(std::string _starSign);
	void SetHunger(float _hunger);
	void SetThirst(float _thirst);
	void SetTats(bool _tats);
	void SetPierced(bool _pierced);
	void SetSmokes(bool _smokes);
	void SetGender(bool _isMale);
	void AddDegree(std::string _degree, std::string _expirationDate);
	void RemoveDegree(std::string _degree);


private:
	int ID; // Person Nr.
	std::string firstName; // First name
	std::string lastName; // Last name
	int age; // Person's age
	float weight; // Weight in Kg
	float height; // height in cm
	std::string eyeColor; // eye color
	std::string hairColor; // hair color
	std::string nationality; // Where Person was born or legally identifies as
	std::string religion; // person's religion
	std::string bloodType; // person's blood type
	std::string starSign; // person's star sign

	float hunger; // How hungry Person is (0 - 100)
	float thirst; // How thirsty Person is (0 - 100)

	bool hasTats; // Has tattoos
	bool isPierced; // Has piercings / earrings
	bool smokes; // smoked tabacco	
	bool isMale; // gender

	std::list<Degree*>* degrees = new std::list<Degree*>();

	Communication* com; // Methods of communicatuion
};

