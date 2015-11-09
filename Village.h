/*
 * Forest.h
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
*/
#ifndef VILLAGE_H
#define VILLAGE_H

#include "Enemy.h"
#include "Enviros.h"
#include "Player.h"
#include "LandofTorvold.h"

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
/**
 * The class represnets a Village
 */
class Village : public Enviros {
public:
	Village();
	~Village(){}
	void run(Player* player);
private:
	Enemy* dijistra; 
	bool endGame;
	string welcomeMsg;
	string exitMsg;
    string readHelpFile();
 	bool playerSequence(Player* p);
 	void startFight(Player* player); 
};

#endif /* VILLAGE_H */