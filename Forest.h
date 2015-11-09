/*
 * Forest.h
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
*/
#ifndef FOREST_H_
#define FOREST_H_

#include "Enemy.h"
#include "Enviros.h"
#include "Player.h"

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
/**
 * The class represnets a Forest
 */
class Forest : public Enviros {
public:
	Forest();
	~Forest();
	void run(Player* player);
private:
	Enemy* chris; 
	bool endGame;
	string welcomeMsg;
	string exitMsg;
    string readHelpFile();
 	bool getCharAOpt(Player* p);
 	void printInstruction(); 
 	void printEnviroInstruct(); 
 	void startFight(Player* player); 
};

#endif /* FOREST_H_ */