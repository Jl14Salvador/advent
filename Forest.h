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
#include "Text.cpp"  

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
/**
 * The class represnets a Forest
 */
class Forest : public Enviros {
public:
	///Constructors and Destructors
	Forest();
	~Forest(){}

	///The class that will run the entire Cave environment, sets up the enemies, and designates what happens in this time
	void run(Player* player);

private:
	Enemy* magnus;

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

 	//Determines if the player quits and skips the environment 
 	bool quit; 

 	///The dialog for this environment 
 	ForestText text; 
};

#endif /* FOREST_H_ */