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
	vector<Enviros*> environmentList;
	Player* _player; 

	///Creates the final bossBattle
	void bossBattle();

	Enemy* smaug; 

	///Creates the _player object by taking input from the user for its name
	void createUser(); 

	///Takes in the player object that will startFight algrorithm that will give the player options to use items, attacks or check the status of the 
	///inventory and health of the player
	void startFight(Player* player);

	///Prints the instructions and options for a battle sequence	
	void printInstruction(); 

	///Prints the instructions and options when in the environment
	void printEnviroInstruct(); 
};

#endif /* LANDOFTORVOLD_H_ */
