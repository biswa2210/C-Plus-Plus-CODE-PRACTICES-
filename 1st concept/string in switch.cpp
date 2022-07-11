//in string switch case statement is not accessable...
//so we use this Method
#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, std::string> database;

	database["Aksan"] = "C++ literature";
	database["Mandy"] = "Medical engineering";
	database["Sahriani"] = "Japanese literature";
	std::cout << "Who do you want?\nAvailable: ";

	for (std::map<std::string, std::string>::const_iterator ci = database.begin();
		ci != database.end();
		++ci
		)
		std::cout << (*ci).first << ' ';

	std::cout << std::endl;

	std::string name;

	std::getline(std::cin, name);

	if (database.count(name) == 0)
		std::cout << "Sorry, `" << name << "' not in database.";
	else
		std::cout << name << ": " << (*database.find(name)).second;

	std::cout << std::endl;
}
