#ifndef ENEMIES_H
#define ENEMIES_H

#include "Player.h" 
#include "Items.h"

class Items; //forward declaration 

class Enemy : public Character {
public:
	Enemy(const std::string enemyName, int h);
	Enemy(const std::string enemyName, int h, Items* i);
	~Enemy() {}; 
	Player* giveItem(Player* who);

private:
	Items* _item; 
};

#endif 