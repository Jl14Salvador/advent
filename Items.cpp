#include "Items.h"
#include "Player.h" 
#include <iostream>


//------------------------------------------------------------------------------

void Bomb::useItem(Player* who) {
	if(quantity > 0) {
		std::cout << "Bomb has been used." << std::endl;
		quantity--; 
		std:: cout << "You have " << quantity << " " << name; 
		if(quantity == 1) 
			std::cout << " remaining\n";
		else 	
			std::cout << "s remaining\n";	
	}
	else 
		std::cout << "You have no " << name << "s left!" << endl; 		
}

string Bomb::getName() const {
	return name; 
}

int Bomb::getQuantity() const {
	return quantity;
}

void Bomb::increment() {
	quantity += 1;  
}
//------------------------------------------------------------------------------

void Potion::useItem(Player* who) {
	if(quantity > 0) {
		std::cout << name << " has been used" << std::endl; 
		who->increaseHealth(20); 
		quantity--; 
		std:: cout << "You have " << quantity << " " << name; 
		if(quantity == 1) 
			std::cout << " remaining\n";
		else 	
			std::cout << "s remaining\n";	
	}
	else
		std::cout << "You have no " << name << "s left." << endl; 						
}

string Potion::getName() const {
	return name; 
}

int Potion::getQuantity() const {
	return quantity;
}

void Potion::increment() {
	quantity += 1;  
}

//------------------------------------------------------------------------------
void SuperPotion::useItem(Player* who){
	if(quantity > 0) {
		std::cout << name << " has been used" << std::endl; 
		who->increaseHealth(50); 
		quantity--; 
		std:: cout << "You have " << quantity << " " << name; 
		if(quantity == 1) 
			std::cout << " remaining\n";
		else 	
			std::cout << "s remaining\n";	
	}
	else 
		std::cout << "You have no " << name << "s left." << endl; 					
}

string SuperPotion::getName() const {
	return name; 
}

int SuperPotion::getQuantity() const {
	return quantity;
}

void SuperPotion::increment() {
	quantity += 1;  
}
//------------------------------------------------------------------------------