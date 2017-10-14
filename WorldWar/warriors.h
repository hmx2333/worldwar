// a base class for all types of warriors using factory style to generate its subclasses

#pragma once

#include <string>


class warriors
{
public:
	warriors();
	~warriors();

	warriors(std::string wname, int wlife, double wattack, double wstrength); //constructor for generating warriors

private:
	int life; //show life of warrior
	int attack; // show attack ability of warrior
	int strength;
	
	
};

