#include "Character.h"

Character::Character(const std::string CharacterName){
	health = 100; 
	name = CharacterName;
	_item = NULL;  	
}

Character::Character(const std::string CharacterName, int h, Item* i) {
	health = h; 
	name = CharacterName; 
	_item = i; 
}

Character::~Character() {
	//delete Character
}

std::string Character::getName() const {
	return name;
}

void Character::setName(std::string n) {
	name = n; 
}

void Character::kill() {
	health = 0; 
}

bool Character::isAlive() {
	if (health == 0) 
		return true; 
	else 
		return false; 
}

void Character::dropHealth(int amount) {
	health = health - amount; 
}

void Character::increaseHealth(int amount) {
	health = health + amount; 
}

int Character::getHealth() const {
	return health; 
}

void Character::attack(Character* attacker, Character* who) {
	std::cout << who->getName() << " was Attacked by " << attacker->getName() << "!" << std::endl; 
	who->dropHealth(20); 
}



