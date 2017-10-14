#include "warriors.h"
#include <string>
#include <iostream>

extern int time;


warriors::warriors()
{
}


warriors::~warriors()
{
}

warriors::warriors(std::string wname, int wlife, double wstrength, double wattack) :life(wlife), strength(wstrength), attack(wattack) {
	if (wname == "dragon") {
		// get time and M std::cout<<gettime
	}
	else if(wname == "icemen") {

	}
	else if (wname == "ninja") {

	}
	else if (wname == "lion") {

	}
	else if(wname == "wolf") {

	}
	else {
		std::cout << "wrong name of warriors" << std::endl;
	}
		
}