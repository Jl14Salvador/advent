#include "Items.h"
#include "Player.h" 
#include <iostream>

//------------------------------------------------------------------------------

void PowerUp::useItem(Player* who) {
	if(quantity > 0) {
		if(who->critify()) {
			std::cout << "PowerUp has been used." << std::endl;
			quantity--; 
			std:: cout << "You have " << quantity << " " << name; 

			if(quantity == 1) 
				std::cout << " remaining\n";
			else 	
				std::cout << "s remaining\n";				
		} 
		else 
			cout << "Next attack has already been powered up." << endl; 
	}
	else 
		std::cout << "You have no " << name << "s left!" << endl; 		
}

string PowerUp::getName() const {
	return name; 
}

int PowerUp::getQuantity() const {
	return quantity;
}

void PowerUp::increment() {
	quantity += 1;  
}

//------------------------------------------------------------------------------

void Potion::useItem(Player* who) {
	if(quantity > 0) {
		who->increaseHealth(20); 
		std::cout << name << " has been used" << std::endl; 		
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
		who->increaseHealth(50); 		
		std::cout << name << " has been used" << std::endl; 
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