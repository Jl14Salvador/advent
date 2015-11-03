/*
 * Board.cpp
 *
 *  Created on: Nov 2, 2015
 *      Author: Frank Zhao
 */

#include "Player.h"
#include <iostream>
#include <assert.h>

Player::Player(const string playerName){
	health = 100; 
	name = playerName; 

	///Set actionList
	actionList.push_back(new Attack() );
	actionList.push_back(new Talk() );
	actionList.push_back(new Rest() );
	actionList.push_back(new Eat() );

	///Set itemList 
	itemList.push_back(new Scroll() ); 
	itemList.push_back(new Key() ) ; 

}

Player::~Player() {
	//delete player
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
