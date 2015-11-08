/*
 * LandOfTorvald.h
 *
 *  Created on: Nov 2, 2015
 *      Author: Frank Zhao
 */

#ifndef LANDOFTORVALD_H_
#define LANDOFTORVALD_H_

#include <iostream>
#include "Enviros.h"
#include <vector>

using namespace std;

/**
 * This represents the adventure game
 */
class LandOfTorvald{
public:
	/*
	 * sets up the environment, with a player, with welcome message 
	 */
	LandOfTorvald();
	~LandOfTorvald();
	void run(); 
private:
	vector<Enviros*> environmentList;
	Player* main; 
};

#endif /* LANDOFTORVALD_H_ */
