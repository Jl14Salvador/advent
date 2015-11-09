/*
 * Village.h
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
*/
#ifndef VILLAGE_H_
#define VILLAGE_H_

#include "Enemy.h"
#include "Enviros.h"
#include "Player.h"

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
/**
 * The class represnets a village
 */
class Village : public Enviros {
public:
	Village();
	~Village();
	void run(Player* player);
private:
	Enemy* john; 
	bool endGame;
	string welcomeMsg;
	string exitMsg;
    string readHelpFile();
 	bool getCharAOpt(Player* p);
 	void startFight(Player* p, Enemy* e);
};

#endif /* VILLAGE_H_ */