#include "Enemy.h" 

Enemy::Enemy(const std::string enemyName, int h, int aD) 
: Character(enemyName, h), _item(NULL), attackDamage(aD) {}

Enemy::Enemy(const std::string enemyName, int h, Items* i, int aD)
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

void Enemy::attack(Character* who) {
	who->dropHealth(attackDamage); 
	std::cout << std::endl << this->getName() << " did " << attackDamage << " damage! ";
	if(who->getHealth() <= 0)
		who->kill(); 
	else
		std::cout << std::endl << who->getName() << " has " << who->getHealth() << " health remaining.\n";
}