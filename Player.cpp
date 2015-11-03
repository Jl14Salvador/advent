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

}

Player::~Player() {
	//delete[] board;
}

bool Player::isAlive() {
	if (health == 0) 
		return true; 
	else 
		return false; 
}

void Player::setAlive(bool b) {
	if (b == true) 

}

void Player::dropHealth(int amount) {
	health = health - amount; 
}

void Player::increaseHealth(int amount) {
	health = health + amount; 
}
