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
private:
	int health;
	vector<Action*> actionList;
	vector<Item*> itemList;
};
       
#endif /* PLAYER_H_ */
