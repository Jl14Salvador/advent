
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
	///Constructors and Destructors
	Character(const std::string CharacterName);
	Character(const std::string CharacterName, int h); 
	virtual ~Character(){};

	///Getters and Setters
	std::string getName() const;

	///Sets the name 	
	void setName(std::string n);

	///Checks to see if the Character is alive, returns true or false
 	bool isAlive();

 	///Kills the character and sets its health to 0
	void kill();  

	///Drops the health of the character by the amount of the integer specified
	void dropHealth(int amount); 

	//Increases the health of the character by the amount of the integer specified
	void increaseHealth(int amount);

	///Return the health of the Character as an integer
	int getHealth() const; 

	///Prints the health of the Character to the screen
	void printHealth() const; 

private:
	std::string name; 
	int health;
};

#endif