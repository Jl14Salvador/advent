#include "Character.h"
#include "Questions.h" 

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

std::string Character::getName() const {
	return name;
}

void Character::setName(std::string n) {
	name = n; 
}

void Character::kill() {
	health = 0; 
	std::cout << this->getName() << " is dead!\n";
}

bool Character::isAlive() {
	if (health == 0) 
		return false; 
	else 
		return true; 
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

/*void Character::attack(Character* attacker, Character* who, char attkType) {
	Questions q;
	bool success; 

	switch(attkType){
		case 'a':
			success = q.question1();
			if(success){
				std::cout << who->getName() << " was Attacked by " << attacker->getName() << "!" << std::endl; 
				who->dropHealth(20);
			}
			else {
				std::cout << "You're wrong! You were hurt!";
				attacker->dropHealth(20);
			}				
			break; 

		case 'b':
			success = q.question2();
			if(success){
				std::cout << who->getName() << " was Attacked by " << attacker->getName() << "!" << std::endl; 
				who->dropHealth(20);
			}
			else {
				std::cout << "You're wrong! You were hurt!";
				attacker->dropHealth(20);
			}		
			break; 

		case 'c':
			success = q.question3();
			if(success){
				std::cout << who->getName() << " was Attacked by " << attacker->getName() << "!" << std::endl; 
				who->dropHealth(20);
			}	
			else {
				std::cout << "You're wrong! You were hurt!";
				attacker->dropHealth(20);
			}		
			break; 
		case 'd':
			success = q.question4();
			if(success) {
				std::cout << who->getName() << " was Attacked by " << attacker->getName() << "!" << std::endl; 
				who->dropHealth(20);
			}
				
			else {
				std::cout << "You're wrong! You were hurt!";
				attacker->dropHealth(20);
			}		
			break; 

		case 'e':
			success = q.question5();
			if(success) {
				std::cout << who->getName() << " was Attacked by " << attacker->getName() << "!" << std::endl; 
				who->dropHealth(20);
			}
			else {
				std::cout << "You're wrong! You were hurt!";
				attacker->dropHealth(20);
			}		
			break; 

		default: 
			std::cout << who->getName() << " was Attacked by " << attacker->getName() << "!" << std::endl; 
			who->dropHealth(20); 
			break; 
	}
}
*/


