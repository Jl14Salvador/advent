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
	///Constructors and Destructors
	Castle();
	~Castle(){}

	///The class that will run the entire Cave environment, sets up the enemies, and designates what happens in this time
	void run(Player* player);

private:
	Enemy* ledorf; 

	///This is a variable to check whether or not the environment is over
	bool endGame;

	///Welcome Message for the environment
	string welcomeMsg;

	///Exit Message for the environment	
	string exitMsg;

	///generates help file
    string readHelpFile();

    ///This generates the battle for the environment and gives the player the options to display help, start fight or exit 
 	bool playerSequence(Player* p);

 	///Takes in the player object that will startFight algrorithm that will give the player options to use items, attacks or check the status of the 
 	///inventory and health of the player
 	void startFight(Player* player); 
};

#endif /* CASTLE_H */