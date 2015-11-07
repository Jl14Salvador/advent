/*
 * Player.h
 *
 *  Created on: Nov 2, 2015
 *      Author: Frank Zhao
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
#include <vector>
#include "Actions.h" 
#include "Items.h" 
 
using namespace std;

class Actions; //forward declaration 
class Items; //forward declaration 

/**
 * This represents the player of the game that interact with the rest of the system
 */
class Player : public Character {
public:
	Player(const string playerName);
	Player(const string playerName, int h);
	virtual ~Player();
	
	void addItem(Items* i);
	bool hasKey();
	vector<Items*> getInventory() const;

private:
	vector<Actions*> actionList;
	vector<Items*> itemList;
	
};
       
#endif /* PLAYER_H_ */
