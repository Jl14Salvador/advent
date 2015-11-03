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
using namespace std;

/**
 * This represents the player of the game that interact with the rest of the system
 */
class Player {
public:
	Player(const string playerName);
	~Player();
	bool isAlive();
	void kill();  
	void dropHealth(int amount); 
	void increaseHealth(int amount);


private:
	string name; 
	int health;
	vector<Action*> actionList;
	vector<Item*> itemList;
};
       
#endif /* PLAYER_H_ */
