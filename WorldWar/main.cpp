#include <iostream>
#include <typeinfo>
#include <exception>
#include <exception>
#include <unordered_map>
#include <vector>

//file for main function
int time;
std::vector<std::string> warriorList = {"dragon", "ninjia", "liceman", "lion", "wolf"};


void main() {
	//First input case Number
	int caseNum;
	std::cin >> caseNum;

	//check case number 
	if (caseNum <= 0) { throw std::exception("Invalid case number!"); }

	//Process cases one by one
	for (int i = 0; i < caseNum; i++) {

		//get and check life value M
		int lifeVal;
		std::cin >> lifeVal;
		if (lifeVal < 1 || lifeVal > 10000) { 
			throw std::exception("invalid life value M"); //check if the input in valid
		}

		//get and check single warrior value and store in unordered_map
	    std::unordered_map<std::string, int> warriorVal;
		for (int i = 0; i < 5; i++) {
			int singleVal;
			std::cin >> singleVal;
			if (singleVal < 1 || singleVal > 10000) {
				throw std::exception("invalid life value of an warrior ");//check if the input is valid
			}
			warriorVal.insert(std::make_pair(warriorList[i], singleVal));
		}

	}// end of for-loop

}
