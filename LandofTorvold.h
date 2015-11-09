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
using namespace std;
#include "Forest.h"



/**
 * This represents the adventure game
 */


class LandofTorvold{
public:
	/*
	 * sets up the environment, with a player, with welcome message 
	 */
	LandofTorvold();
	~LandofTorvold(){}
	void run(); 
	void createUser(); 
	//void bossBattle();

private:
	vector<Enviros*> environmentList;
	Player* _player; 
	void bossBattle();
};

#endif /* LANDOFTORVOLD_H_ */
