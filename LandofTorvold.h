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
	LandofTorvold(); 
	~LandofTorvold(){}
	void run(); 


private:
	vector<Enviros*> environmentList;
	Player* _player; 
	void bossBattle();
	Enemy* smaug; 
	void createUser(); 
	void startFight(Player* player);
	void printInstruction(); 
	void printEnviroInstruct(); 
};

#endif /* LANDOFTORVOLD_H_ */
