/*
 * Castle.h
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
*/
#ifndef CASTLE_H
#define CASTLE_H

#include "Enemy.h"
#include "Enviros.h"
#include "Player.h"

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
/**
 * The class represnets a Castle
 */
class Castle : public Enviros {
public:
	Castle();
	~Castle(){}
	void run(Player* player);
private:
	Enemy* ledorf; 
	bool endGame;
	string welcomeMsg;
	string exitMsg;
    string readHelpFile();
 	bool playerSequence(Player* p);
 	void startFight(Player* player); 
};

#endif /* CASTLE_H */