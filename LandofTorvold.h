/*
 * LandOfTorvald.h
 *
 *  Created on: Nov 2, 2015
 *      Author: Frank Zhao
 */

#ifndef LANDOFTORVOLD_H_
#define LANDOFTORVOLD_H_

#include <iostream>
#include "Enviros.h"
#include <vector>
#include "Player.h"
#include "Village.h"
#include "Forest.h"
#include "Cave.h"
#include "Castle.h"
#include "Lair.h"

using namespace std;


/**
 * This represents the class that will run the whole game
 */


class LandofTorvold{
public:
	/*
	 * sets up the environment, with a player, with welcome message 
	 */
	///Constructors and Destructors
	LandofTorvold(); 
	~LandofTorvold(){}

	///Runs the Land of Torvold controller class that invokes the other environment's run classes
	void run(); 


private:
	///A vector that contains the 5 different environments you will traverse through
	vector<Enviros*> environmentList;
	Player* _player; 

	///Creates the _player object by taking input from the user for its name
	void createUser(); 


};

#endif /* LANDOFTORVOLD_H_ */
