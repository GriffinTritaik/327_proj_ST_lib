//
/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: Griffin Tritaik
 */
#include <iostream>
#include <memory>

#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h"

//create with appropriate phrases
Smalltalk_Brit::Smalltalk_Brit(int iPerson) :
		Smalltalk(BRIT, iPerson) {
	populatePhrases();
}

Smalltalk_Brit::~Smalltalk_Brit(void) {

}
//adds all of the Smalltalk_Brit phrases to the vector
void Smalltalk_Brit::populatePhrases() {
	mySmallTalk.push_back(BRIT_1);
	mySmallTalk.push_back(BRIT_2);
	mySmallTalk.push_back(BRIT_3);
	mySmallTalk.push_back(BRIT_4);
	mySmallTalk.push_back(BRIT_5);
	mySmallTalk.push_back(BRIT_6);
	mySmallTalk.push_back(BRIT_7);
}
