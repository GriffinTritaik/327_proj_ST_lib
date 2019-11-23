//
/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: Griffin Tritaik
 */
#include <iostream>
#include <memory>

#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/constants.h"

//create with appropriate phrases
ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i) :
		Smalltalk_American(iPerson) {
	populatePhrases();
}
ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void) {

}

//adds all of the ST_American_DonutEnthusiest phrases to the vector
void ST_American_DonutEnthusiest::populatePhrases() {
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
}
