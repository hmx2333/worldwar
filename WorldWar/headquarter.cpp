#include "headquarter.h"
#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

class headquarter {

	headquarter::headquarter(int caseNmu, int lifeVal,
		std::unordered_map<std::string, int>& warriorVal, std::string color)
	{
		
		headquarter::M = lifeVal;

		if (color == "red") {
			for (int i = 0; i < 5; i++) {
				redVal[i] = warriorVal[redWarrior[i]];
			}
		}
		else {
			for (int i = 0; i < 5; i++) {
				blueVal[i] = warriorVal[blueWarrior[i]];
			}
		}		
	}


	headquarter::~headquarter()
	{
	}



	//set red headquarter go first
	void makeWarrior() {
		int min = findMinVal();
		int Next = 0;
		while (M > min) 
		{
			switch (Next) {
				case 0:
					tryToMakeWarrior(Next++);
					break;
				case 1:
					tryToMakeWarrior(Next++);
					break;
				case 2:
					tryToMakeWarrior(Next++);
					break;
				case 3:
					tryToMakeWarrior(Next++);
					break;
				case 4:
					tryToMakeWarrior(Next++);
					break;
				default:
					throw std::exception("Error!");
			}

		}

		std::cout << time << color <<" headquarter stops making warriors" << std::endl;
"

	}

	bool headquarter::tryToMakeWarrior(int i) {
		if (M > redVal[i]) {
			Wnum++;
			time++;
			perNum[i]++
			std::cout << time << color << redWarrior[i] << Wnum << "born with strength" << redVal[i]
				<< perNum[i] << redWarrior[i] << "in" << color << "headquarter" << std::endl;
		}
	}

	int headquarter::findMinVal() {
		int min = redVal[0];
		for (int i = 1; i < 5; i++) {
			if (redVal[i] > min) { min = redVal[i]; }
		}
		return min;
	}

};

 