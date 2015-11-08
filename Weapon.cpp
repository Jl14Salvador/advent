#include "Weapon.h"
#include "Character.h" 

void BasicAttk::attack(Character* attacker, Character* who) {
	std::cout << attacker->getName() << " has punched " << who->getName() << "!"; 
	who->dropHealth(attackDamage);
	std::cout << "\nDid " << attackDamage << " damage!\n"; 
	std::cout << who->getName() << " has " << who->getHealth() << " health remaining.\n";
	if(who->getHealth() < 0)
		who->kill(); 
} 

void FireAttk::attack(Character* attacker, Character* who) {
	std::cout << attacker->getName() << " has burned " << who->getName() << "!"; 
	who->dropHealth(attackDamage);
	std::cout << "\nDid " << attackDamage << " damage!\n"; 
	std::cout << who->getName() << " has " << who->getHealth() << " health remaining.\n";
	if(who->getHealth() <= 0)
		who->kill(); 
} 
void IceAttk::attack(Character* attacker, Character* who) {
	std::cout << attacker->getName() << " has froze " << who->getName() << "!"; 
	who->dropHealth(attackDamage);
	std::cout << "\nDid " << attackDamage << " damage!\n"; 
	std::cout << who->getName() << " has " << who->getHealth() << " health remaining.\n";
	if(who->getHealth() <= 0)
		who->kill(); 
} 

void Quake::attack(Character* attacker, Character* who) {
	std::cout << attacker->getName() << " has shook " << who->getName() << "!"; 
	who->dropHealth(attackDamage);
	std::cout << "\nDid " << attackDamage << " damage!\n"; 
	std::cout << who->getName() << " has " << who->getHealth() << " health remaining.\n";
	if(who->getHealth() <= 0)
		who->kill(); 
} 

void MasterSword::attack(Character* attacker, Character* who) {
	std::cout << attacker->getName() << " has slashed " << who->getName() << " with fierce power!"; 
	who->dropHealth(attackDamage);
	std::cout << "\nDid " << attackDamage << " damage!\n"; 
	std::cout << who->getName() << " has " << who->getHealth() << " health remaining.\n";
	if(who->getHealth() <= 0)
		who->kill(); 
} 



