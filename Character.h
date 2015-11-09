
/*
 * Character.h
 *
 *  Created on: Nov 2, 2015
 *      Author: Blinding Eclipse
 */

#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>

class Items; 
class Actions; 

class Character {
public:
	Character(const std::string CharacterName);
	Character(const std::string CharacterName, int h); 
	virtual ~Character(){};
	std::string getName() const; 	
	void setName(std::string n);
 	bool isAlive();
	void kill();  
	void dropHealth(int amount); 
	void increaseHealth(int amount);
	int getHealth() const; 
	void printHealth() const; 
	// void attack(Character* attacker, Character* who, char attkType); 

private:
	std::string name; 
	int health;
};

#endif