/*
 * Forest.h
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
*/
#ifndef CAVE_H
#define CAVE_H

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
class Cave : public Enviros {
public:
	Cave();
	~Cave(){}
	void run(Player* player);
private:
	Enemy* berners; 
	bool endGame;
	string welcomeMsg;
	string exitMsg;
    string readHelpFile();
 	bool playerSequence(Player* p);
 	void printInstruction(); 
 	void printEnviroInstruct(); 
 	void startFight(Player* player); 
};

#endif /* CAVE_H */