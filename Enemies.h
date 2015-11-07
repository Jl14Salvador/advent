#ifndef ENEMIES_H
#define ENEMIES_H

#include "Player.h" 

class Enemy : public Character {
public:
	Enemy(const std::string enemyName) : Character(enemyName), _item(NULL) {}
	Enemy(const std::string enemyName, int h, Item* i) : Character(enemyName, h), _item(i) {}
	virtual ~Enemy() {}; 
	Player* giveItem(Player* who);

private:
	*Item _item; 
};

#endif 