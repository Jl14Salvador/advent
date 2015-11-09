/*
 * Player.h
 *
 *  Created on: Nov 2, 2015
 *      Author: Blinding Eclipse
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
#include <vector>
#include "Weapon.h"
#include "Items.h" 
 
using namespace std;

class Items; //forward declaration 
class Weapon; //forward declaration

/**
 * This represents the player of the game that interact with the rest of the system
 */
class Player : public Character {
public:
	Player(const string playerName);
	Player(const string playerName, int h);
	~Player();

	void addItem(Items* i);
	void useItem(Items* i); 
	vector<Items*> getInventory() const;
	void showItems() const; 
	void attack(Character* who);
	void setWeapon(Weapon* weaponType);
	void addGem();
	int getGems() const; 

private:
	vector<Items*> itemList;
	Weapon* _weapon; 
	int gems; 
	
};
       
#endif /* PLAYER_H_ */
