#include "Character.h"

Character::Character(const std::string CharacterName){
	health = 100; 
	name = CharacterName; 	
}

Character::Character(const std::string CharacterName, int h) {
	health = h; 
	name = CharacterName; 
}

Character::~Character() {
	//delete Character
}

std::string Character::getName(){
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

int Character::getHealth() {
	return health; 
}

// void Character::addItem(Items &i) {
// 	itemList.push_back(i); 
// }
