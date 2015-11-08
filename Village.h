/*
 * Village.h
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse

#ifndef VILLAGE_H_
#define VILLAGE_H_

#include "Game.h"
#include <vector>
#include <iostream>
#include <fstream>
/**
 * The class represnets a village
 */
class Village: public Enviros {
public:
	Village();
	~Village();
	void run(Player* player);
	
private:
	Enemy* john; 
	Player* player; 
	bool endGame;
	string welcomeMsg;
    string readHelpFile();
 	bool getCharAOpt();
};

#endif /* VILLAGE_H_ */