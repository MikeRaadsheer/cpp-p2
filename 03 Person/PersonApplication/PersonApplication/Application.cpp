#include "stdafx.h"
#include "Application.h"

Application::Application()
{
	//mike = new Person(001, "Mike", "Raadsheer", 78.1f, 182.3f, true);
	people = new std::list<Person*>();
	maxPeople = 10;
	peopleCreated = 0;
	runState = true;
}


Application::~Application()
{
}

void Application::Run()
{
	// startup message
	std::cout << "[APPLICATION]: RUNNING\n\n";
	std::cout << "For help type 'help' or '?'.\n";
	std::cout << "Please Enter a command.\n\n";

	while (runState)
	{
		char input[256];
		std::cin.getline(input, 257);
		std::string command = input;

		if (command == "?" || command == "help")
		{
			Help("help"); // show commands
		}
		else if (command == "exit")
		{
			runState = false; // quit application
		}
		else if (command == "list")
		{
			GetLists("");
		}
		else if(command == "? person" || command == "help person")
		{
			Help("person");
		}
		else if (command == "list people")
		{
			GetLists("people");
		}
		else if (command == "person add")
		{
			AddPerson();
		}

		for (std::list<Person*>::iterator it = people->begin(); it != people->end(); ++it)
		{
			int i = (*it)->GetID();
			std::string _ID;
			std::stringstream ss;
			ss << i;
			_ID = ss.str();
			std::string comm = "person " + _ID;

			if (command == comm + " stats")
			{
				(*it)->GetStats();
			}
			else if (command == comm + " says")
			{
				std::cout << "Message: ";
				(*it)->Message(GetString());
			}
			else if (command == comm + " first")
			{
				std::cout << "First Name: ";
				(*it)->SetFirstName(GetString());
			}
			else if (command == comm + " last")
			{
				std::cout << "Last Name: ";
				(*it)->SetLastName(GetString());
			}
			else if (command == comm + " age")
			{
				std::cout << "Age: ";
				(*it)->SetAge(GetInt());
			}
			else if (command == comm + " weight")
			{
				std::cout << "Weight: ";
				(*it)->SetWeight(GetFloat());
			}
			else if (command == comm + " height")
			{
				std::cout << "Height: ";
				(*it)->SetHeight(GetFloat());
			}
			else if (command == comm + " gender")
			{
				std::cout << "Please Enter a 'gender (male | female)': ";
				std::string in;
				bool _gender;
				std::cin >> in;

				if (in == "male" || in == "m" || in == "true" || in == "1") {
					(*it)->SetGender(true);
				}
				else if (in == "female" || in == "f" || in == "false" || in == "0")
				{
					(*it)->SetGender(false);
				}
			}
			else if (command == comm + " eyecolor")
			{
				std::cout << "Eye Color: ";
				(*it)->SetEyeColor(GetString());
			}
			else if (command == comm + " haircolor")
			{
				std::cout << "Hair Color: ";
				(*it)->SetHairColor(GetString());
			}
			else if (command == comm + " nationality")
			{
				std::cout << "Nationality: ";
				(*it)->SetNationality(GetString());
			}
			else if (command == comm + " religion")
			{
				std::cout << "Religion: ";
				(*it)->SetReligion(GetString());
			}
			else if (command == comm + " bloodtype")
			{
				std::cout << "Blood Type: ";
				(*it)->SetBloodType(GetString());
			}
			else if (command == comm + " starsign")
			{
				std::cout << "Star Sign: ";
				(*it)->SetStarSign(GetString());
			}
			else if (command == comm + " hastats")
			{
				std::cout << "Has Tattoo(s) (yes | no): ";

				std::string _tat = GetString();

				if (_tat == "no" || _tat == "false" || _tat == "0")
				{
					(*it)->SetTats(false);
				}
				else if (_tat == "yes" || _tat == "true" || _tat == "1")
				{
					(*it)->SetTats(true);
				}
			}
			else if (command == comm + " ispierced")
			{
				std::cout << "Is Pierced? (yes | no): ";

				std::string _pie = GetString();

				if (_pie == "no" || _pie == "false" || _pie == "0")
				{
					(*it)->SetPierced(false);
				}
				else if (_pie == "yes" || _pie == "true" || _pie == "1")
				{
					(*it)->SetPierced(true);
				}
			}
			else if (command == comm + " smokes")
			{
				std::cout << "Smokes? (yes | no): ";

				std::string _smo = GetString();

				if (_smo == "no" || _smo == "false" || _smo == "0")
				{
					(*it)->SetSmokes(false);
				}
				else if (_smo == "yes" || _smo == "true" || _smo == "1")
				{
					(*it)->SetSmokes(true);
				}
			}
			else if (command == comm + " degree add")
			{
				std::string degree;
				std::string expDate;

				std::cout << "Degree: ";
				degree = GetString();
				std::cout << "Expiration Date: ";
				expDate = GetString();

				(*it)->AddDegree(degree, expDate);
			}
			else if (command == comm + " degree remove")
			{
				std::string degree;
				std::string expDate;

				std::cout << "Degree: ";
				degree = GetString();

				(*it)->RemoveDegree(degree);
			}
		}

	}
}

void Application::Help(std::string _list)
{

	if (_list == "help")
	{
		std::cout << "\n\n[Application]: " << ": List of commands.\n\n";

		std::cout << "help            Shows a list of commands.\n";
		std::cout << "exit            Closes application.\n\n";

		std::cout << "list ARRAY      Shows a list of any given valid array.\n";
		std::cout << "                For a list of valid array's enter 'list'.\n\n";

		std::cout << "person          used for commands on people.\n";
		std::cout << "?               Shows a list of commands.\n\n";

		std::cout << "For more information about a command enter 'help command'\n\n";
	}
	else if (_list == "person")
	{
		std::cout << "\n\n[Application]: " << ": List of commands for people.\n\n";


		std::cout << "list people        Shows a list of all people with name and id.\n";
		std::cout << "person add         Create and add a person to people.\n\n";

		std::cout << "person ID says     Make a person say someting in a chat style message.\n\n";
		std::cout << "person ID stats    Shows a list of all information about a person.\n\n";

		std::cout << "person ID first           Change the FirstName of a person.\n";
		std::cout << "person ID last            Change the LastName of a person.\n";
		std::cout << "person ID age             Change the age of a person.\n";
		std::cout << "person ID weight          Change the weight of a person.\n";
		std::cout << "person ID height          Change the height of a person.\n";
		std::cout << "person ID gender          Change the gender of a person.\n\n";
		std::cout << "person ID eyecolor        Change the eye color of a person.\n";
		std::cout << "person ID haircolor       Change the hair color of a person.\n";
		std::cout << "person ID nationality     Change the nationality of a person.\n";
		std::cout << "person ID religion        Change the religion of a person.\n";
		std::cout << "person ID bloodtype       Change the blood type of a person.\n";
		std::cout << "person ID starsign        Change the star sign of a person.\n";
		std::cout << "person ID hastats         Change if a person has tattoos or not.\n";
		std::cout << "person ID ispierced       Change if a person is pierced.\n";
		std::cout << "person ID smokes          Change if a person smokes.\n\n";
		
		std::cout << "person ID degree add      Add a degree, all degree's are shown in 'player ID stats'.\n ";
		std::cout << "person ID degree remove   Remove a degree.\n\n ";
	}

}

void Application::HelpCommand(std::string command)
{

}





void Application::GetLists(std::string list)
{
	if (list == "")
	{
		std::cout << "\n";

		std::cout << "Lists.\n\n";

		std::cout << "- people\n";

		std::cout << std::endl;
	}
	else if (list == "people")
	{
		std::cout << "\n";

		if (people->size() > 0) {
			std::list<Person*>::iterator it;
			for (it = people->begin(); it != people->end(); ++it)
			{
				std::cout << "ID: " << (*it)->GetID() << " | Name: " << (*it)->GetName() << "\n";
			}
		}
		else 
		{
			std::cout << "There are no people.\nCreate a person using 'person add'\n";
		}
		std::cout << std::endl;
	}

}

void Application::AddPerson()
{


	if (people->size() <= maxPeople)
	{
		// create variables
		int _ID;
		int _age;
		std::string _firstName, _lastName;
		bool _gender;

		bool validVar = false;
		char input;

		// set values

		std::cout << "\nPersion Creation Mode\n";
		std::cout << "Commands won't work until creation is finished!\n\n";

		_ID = peopleCreated + 1;



		std::cout << "Please Enter a 'First Name': ";
		std::cin >> _firstName;
		std::cout << "\n";


		std::cout << "Please Enter a 'last Name': ";
		std::cin >> _lastName;
		std::cout << "\n";
		

		std::cout << "Please Enter an 'age': ";
		std::cin >> _age;
		if (_age < 0) {
			_age = -_age;
		}
		std::cout << "\n";

		std::cout << "Please Enter a 'gender (male | female)': ";
		std::string in;
		std::cin >> in;

		if (in == "male" || in == "m" || in == "true" || in == "1") {
			_gender = true;
		}else if (in == "female" || in == "f" || in == "false" || in == "0")
		{
			_gender = false;
		}

		std::cout << "\n\n Person Created.\n";


		// create and add person
		Person* person = new Person(_ID, _firstName, _lastName, _age, _gender);
		people->push_back(person);

		std::cout << "\n." << person->GetName() << " has been added to 'list people'.\n\n";
	}
	peopleCreated++;

	if (peopleCreated >= maxPeople)
	{
		std::cout << "Maximum population reached.\n\n";
	}

}

std::string Application::GetString()
{
	std::string str;
	std::getline(std::cin, str);
	std::cout << std::endl;
	return str;
}

int Application::GetInt()
{
	int in;
	std::cin >> in;
	std::cout << std::endl;
	return in;
}

float Application::GetFloat()
{
	float in;
	std::cin >> in;
	std::cout << std::endl;
	return in;
}