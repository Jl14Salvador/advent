#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>

class Character {
public:
	Character(const std::string CharacterName);
	Character(const std::string CharacterName, int h); 
	~Character();
	std::string getName(); 	
	void setName(std::string n);
 	bool isAlive();
	void kill();  
	void dropHealth(int amount); 
	void increaseHealth(int amount);
	int getHealth(); 

private:
	std::string name; 
	int health;
};

#endif