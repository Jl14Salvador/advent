#include "Enemy.h" 

Enemy::Enemy(const std::string enemyName, int h) 
: Character(enemyName, h), _item(NULL) {}

Enemy::Enemy(const std::string enemyName, int h, Items* i)
: Character(enemyName, h), _item(i) {}

Enemy::~Enemy(){
	delete _item; 
}

Player* Enemy::giveItem(Player* who){
	if(_item != NULL){
		who->addItem(_item);
		_item = 0; 
	}
	else {
		std::cout << this->getName() << " has no item to give." << endl; 
	}
	return who; 
}