//
/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: Griffin Tritaik
 */
#include <iostream>
#include <memory>

#include "./includes/Smalltalk.h"
#include "./includes/constants.h"

using namespace std;

//derived class will set Nationality, iPerson. iPerson is just a counter used to distinguish between objects of the same type
Smalltalk::Smalltalk(std::string myNationality, int iPerson) :
		nationality(myNationality), iPerson(iPerson) {
	pWatch = 0;
	current_phrase = 0;
}

Smalltalk::~Smalltalk(void) {

}

//cycles through phrases added in populatePhrases. Returns them 1 by 1 starting with the first and ending
//with the last and then it starts over
//takes the form Nationality iPerson: phrase
//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
//AMERICAN 10:Why yes, I would like to supersize that
std::string Smalltalk::saySomething() {
	string ms;
	vector<string>::iterator myStringVectorIterator;
	for (myStringVectorIterator = mySmallTalk.begin();
			myStringVectorIterator != mySmallTalk.end();
			myStringVectorIterator++) {
		ms += nationality + " " + to_string(iPerson) + ":"
				+ *myStringVectorIterator + "\n";
	}
	return ms;
}

//returns the time (if pWatch contains a watch ) in the form of THE_CURRENT_TIME_IS: (from the actual watch object itself) and then the time
//or I_DO_NOT_HAVE_A_WATCH string (if pWatch does not contain a watch)
std::string Smalltalk::getTime() {
	if (pWatch == 0) {
		return I_DO_NOT_HAVE_A_WATCH;
	}
	return "THE_CURRENT_TIME_IS:" + pWatch->getTime();
}

//if this object has a watch it is taken away, otherwise an empty unique_ptr is returned
// This transaction simulates giving away a watch
std::unique_ptr<Watch> Smalltalk::takeWatch() {
	unique_ptr<Watch> tempWatch;
	if (this->pWatch == 0) {
		return tempWatch;
	}
	tempWatch = move(this->pWatch);
	this->pWatch = 0;
	return tempWatch;
}

//if already have a watch then return false and dont change pWatch pointer
//otherwise accept watch (return true) and set this->pWatch=pWatch (use std::move)
bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	if (this->pWatch != 0) {
		return false;
	}
	this->pWatch = move(pWatch);
	return true;
}

