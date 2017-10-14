#pragma once

#include <vector>
#include <string>

class headquarter
{
public:
	headquarter(int, int, std::unordered_map<std::string, int>);
	~headquarter();
	int M;
	std::string color;
	std::vector<int> redVal;
	std::vector<int> blueVal;
	int Wnum; //default Wnum = 0
	int time; //default time = 0
	std::vector<int> perNum[5];


private:
	const std::vector<std::string> redWarrior = {"iceman", "lion", 
		"wolf", "ninjia", "dragon"};
	const std::vector<std::string> blueWarrior = {"lion", "dragon", 
		"ninjia", "iceman", "wolf"};
	bool tryToMakeWarrior();
	void makeWarrior();
	int findMinVal();
};

