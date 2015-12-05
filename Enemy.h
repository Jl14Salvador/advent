
/*
 * Enemy.h
 *
 *  Created on: Nov 2, 2015
 *      Author: Blinding Eclipse
 */
#ifndef ENEMIES_H
#define ENEMIES_H

#include "Player.h" 
#include "Items.h"

class Items; //forward declaration 

class Enemy : public Character {
public:
	///Constructors and Destructors
	Enemy(const std::string enemyName, int h, int ad);
	Enemy(const std::string enemyName, int h, Items* i, int aD);
	~Enemy();

	///This passes the object _item that the Enemy has and gives it to the Player object
	Player* giveItem(Player* who);
	void attack(Character* who); 

private:
	Items* _item; 
	int attackDamage; 
};

#endif 