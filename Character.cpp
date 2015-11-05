#include "Player.h"

Player::Player(const string playerName){
	health = 100; 
	name = playerName; 	
}

Player::Player(const string playerName, int h) {
	health = h; 
	name = playerName; 
}

Player::~Player() {
	//delete player
}

string Player::getName(){
	return name;
}

void Player::setName(string n) {
	name = n; 
}

void Player::kill() {
	health = 0; 
}

bool Player::isAlive() {
	if (health == 0) 
		return true; 
	else 
		return false; 
}

void Player::dropHealth(int amount) {
	health = health - amount; 
}

void Player::increaseHealth(int amount) {
	health = health + amount; 
}

int Player::getHealth() {
	return health; 
}

// void Player::addItem(Items &i) {
// 	itemList.push_back(i); 
// }
