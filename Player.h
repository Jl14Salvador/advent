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

/**
 * This represents the player of the game that interact with the rest of the system
 */
class Player : public Character {
public:
	Player(const string playerName) : Character(playerName) {
	///Set actionList
	actionList.push_back(new Attack);
	actionList.push_back(new Talk);
	actionList.push_back(new Open);
	actionList.push_back(new Eat);

	///Set itemList 
	itemList.push_back(new Scroll); 
	itemList.push_back(new Key) ; 
	itemList.push_back(new Potion);
	}

	Player(const string playerName, int h) : Character(playerName, h) {
	///Set actionList
	actionList.push_back(new Attack);
	actionList.push_back(new Talk);
	actionList.push_back(new Open);
	actionList.push_back(new Eat);

	///Set itemList 
	itemList.push_back(new Scroll); 
	itemList.push_back(new Key); 
	itemList.push_back(new Potion); 
	} 
	~Player();
	string getName(); 	
	// void addItem(Items &i); 

private:
	vector<Actions*> actionList;
	vector<Items*> itemList;
};
       
#endif /* PLAYER_H_ */
