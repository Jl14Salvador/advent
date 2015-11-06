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
	Player(const string playerName) : Character(playerName) {
		///Set actionList
		actionList.push_back(new Attack);
		actionList.push_back(new Talk);
		actionList.push_back(new Ignore);
		actionList.push_back(new Skip);

		///Set itemList 
		itemList.push_back(new Scroll); 
		itemList.push_back(new Key); 
		itemList.push_back(new Potion);
		itemList.push_back(new SuperPotion); 
	}

	Player(const string playerName, int h) : Character(playerName, h) {
		///Set actionList
		actionList.push_back(new Attack);
		actionList.push_back(new Talk);
		actionList.push_back(new Ignore);
		actionList.push_back(new Skip);

		///Set itemList 
		itemList.push_back(new Scroll); 
		itemList.push_back(new Key); 
		itemList.push_back(new Potion); 
		itemList.push_back(new SuperPotion); 
	} 

	~Player();
	void addItem(Items* i);
	bool hasKey();
	vector<Items*> getInventory();

private:
	vector<Actions*> actionList;
	vector<Items*> itemList;
};
       
#endif /* PLAYER_H_ */
