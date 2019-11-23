//
/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 */
#include <iostream>
#include <memory>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

using namespace std;

//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit, int numAmerican,
		int numbAmericanDonutEnthusiest, int numWatches) {

	//create a vector to hold SmallTalk unique pointers
	vector<unique_ptr<Smalltalk>> mv;

	//add brits to vector
	for (int i = 0; i < numBrit; i++) {
		mv.push_back(unique_ptr<Smalltalk_Brit>(new Smalltalk_Brit(i)));
	}
	//add americans  to vector
	for (int i = 0; i < numAmerican; i++) {
		mv.push_back(unique_ptr<Smalltalk_American>(new Smalltalk_American(i)));
	}
	//add american donut enthusiest  to vector
	for (int i = 0; i < numbAmericanDonutEnthusiest; i++) {
		mv.push_back(
				unique_ptr<ST_American_DonutEnthusiest>(
						new ST_American_DonutEnthusiest(i)));
	}
	//create some watches (as long as number watches <= numb people)
	//then give the watches away to first NUM_WATCHES people in the vector
	// when you are finished using the vector you return
	//from this function(see Smalltalk header for hints)

	// checking if the number of watches is larger than the size of the vector
	if (numWatches > mv.size()) {
		//populating the vector with max number of watches if size of the vector is smaller than the number of watches
		for (int i = 0; i < mv.size(); i++) {
			unique_ptr<Watch> mw(new Watch());
			mv[i]->giveWatch(mw);
		}
		return mv;
	}

	//populating the vector with number of watches
	for (int i = 0; i < numWatches; i++) {
		unique_ptr<Watch> mw(new Watch());
		mv[i]->giveWatch(mw);
	}

	//return your vector
	return mv;
}
