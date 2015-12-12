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
	///Constructors and Destructors
	Player(const string playerName);
	Player(const string playerName, int h);
	~Player();

	///Adds an item of type object to the Player by incremeting the quantity of that specific item in its itemList 
	void addItem(Items* i);

	///Uses an item by calling the useItem method in its appropriate position in the vector itemList
	void useItem(Items* i); 

	///Returns the Vector of items available to the Player
	vector<Items*> getInventory() const;

	///Outputs the items and their quantities to the screen
	void showItems() const; 

	///Attack method that passes who will be attacked 
	void attack(Character* who);

	///Allows next attack to become a critical strike returns true if next power is not already powered up
	bool critify(); 

	///Sets the weaponType of the Player, will change its attack behaviour
	void setWeapon(Weapon* weaponType);

	///Increments gem 
	void addGem();

	///Retrives the amount of gems as an integer value
	int getGems() const; 


private:
	vector<Items*> itemList;
	Weapon* _weapon; 
	int gems; 
	
};
       
#endif /* PLAYER_H_ */
