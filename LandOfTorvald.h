/*
 * LandOfTrovald.h
 *
 *  Created on: Nov 2, 2015
 *      Author: Frank Zhao
 */

#ifndef LANDOFTORVALD_H_
#define LANDOFTORVALD_H_

#include <iostream>
#include "Enviros.h";
#include <vector>

using namespace std;

/**
 * This represents the adventure game
 */
class LandOfTrovald {
public:
	/*
	 * sets up the environment, with a player, with welcome message 
	 */
	LandOfTrovald();
	~LandOfTrovald();
private:
	vector<Enviros> environmentList;
};

#endif /* LANDOFTORVALD_H_ */
