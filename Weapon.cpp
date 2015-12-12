#include "Weapon.h"
#include "Character.h" 

//------------------------------------------------------------------------------

void BasicAttk::attack(Character* attacker, Character* who) {
	std::cout << attacker->getName() << " has punched " << who->getName() << "! "; 
	if(isPowered == true){
		who->dropHealth(attackDamage*2);
		isPowered = false;
		std::cout << "\nCritical hit! Did " << attackDamage*2 << " damage!\n";  		
	}
	else {
		who->dropHealth(attackDamage);
		std::cout << "\nDid " << attackDamage << " damage!\n"; 		
	}

	if(who->getHealth() <= 0)
		who->kill();
	else 
		std::cout << who->getName() << " has " << who->getHealth() << " health remaining.\n \n"; 	
} 

void BasicAttk::powerUp() {
	isPowered = true; 
}

bool BasicAttk::getIsPowered() {
	return isPowered; 
}

//------------------------------------------------------------------------------

void FireAttk::attack(Character* attacker, Character* who) {
	std::cout << attacker->getName() << " has burned " << who->getName() << "! "; 
	if(isPowered == true){
		who->dropHealth(attackDamage*2);
		isPowered = false; 	
		std::cout << "\nCritical hit! Did " << attackDamage*2 << " damage!\n";  		
	}
	else {
		who->dropHealth(attackDamage);
		std::cout << "\nDid " << attackDamage << " damage!\n"; 		
	}

	if(who->getHealth() <= 0)
		who->kill(); 
	else
		std::cout << who->getName() << " has " << who->getHealth() << " health remaining.\n \n";
} 

void FireAttk::powerUp() {
	isPowered = true; 
}

bool FireAttk::getIsPowered() {
	return isPowered; 
}

//------------------------------------------------------------------------------

void IceAttk::attack(Character* attacker, Character* who) {
	std::cout << attacker->getName() << " has froze " << who->getName() << "! "; 
	if(isPowered == true){
		who->dropHealth(attackDamage*2);
		isPowered = false; 	
		std::cout << "\nCritical hit! Did " << attackDamage*2 << " damage!\n";  			
	}
	else {
		who->dropHealth(attackDamage);
		std::cout << "\nDid " << attackDamage << " damage!\n"; 		
	}

	if(who->getHealth() <= 0)
		who->kill(); 
	else
		std::cout << who->getName() << " has " << who->getHealth() << " health remaining.\n \n";
} 

void IceAttk::powerUp() {
	isPowered = true; 
}

bool IceAttk::getIsPowered() {
	return isPowered; 
}

//------------------------------------------------------------------------------

void Quake::attack(Character* attacker, Character* who) {
	std::cout << attacker->getName() << " has shook " << who->getName() << "! ";
	if(isPowered == true){
		who->dropHealth(attackDamage*2);
		isPowered = false; 	
		std::cout << "\nCritical hit! Did " << attackDamage*2 << " damage!\n";  		
	} 
	else{
		who->dropHealth(attackDamage);
		std::cout << "\nDid " << attackDamage << " damage!\n"; 		
	}		

	if(who->getHealth() <= 0)
		who->kill(); 
	else
		std::cout << who->getName() << " has " << who->getHealth() << " health remaining.\n \n";
} 

void Quake::powerUp() {
	isPowered = true; 
}

bool Quake::getIsPowered() {
	return isPowered; 
}

//------------------------------------------------------------------------------

void MasterSword::attack(Character* attacker, Character* who) {
	std::cout << attacker->getName() << " has slashed " << who->getName() << " with fierce power! "; 
	if(isPowered == true){
		who->dropHealth(attackDamage*2);
		isPowered = false; 	
		std::cout << "\nCritical hit! Did " << attackDamage*2 << " damage!\n";  		
	}
	else {
		who->dropHealth(attackDamage);
		std::cout << "\nDid " << attackDamage << " damage!\n"; 		
	}

	if(who->getHealth() <= 0)
		who->kill(); 
	else
		std::cout << who->getName() << " has " << who->getHealth() << " health remaining.\n \n";
} 

void MasterSword::powerUp() {
	isPowered = true; 
}

bool MasterSword::getIsPowered() {
	return isPowered; 
}

//------------------------------------------------------------------------------

