#include "Items.h"
#include "Player.h" 
#include <iostream>

void Key::useItem(Player* who) {
	std::cout << "Key has been used" << std::endl; 
	for(int i=0; i < (who->getInventory()).size(); i++) {
		if((who->getInventory()).at(i).contains(Key)){
			(who->getInventory()).erase(i);
			break; 
		}	
	}
}
		
void Scroll::useItem(Player* who) {
	std::cout << "Scroll has been used" << std::endl; 
	for(int i=0; i < (who->getInventory()).size(); i++){
		if((who->getInventory()).at(i).contains(Scroll)){
			(who->getInventory()).erase(i);
			break; 
		}	
	}		
}

void Potion::useItem(Player* who) {
	std::cout << "Potion has been used" << std::endl; 
	who->increaseHealth(20); 
	for(int i=0; i < (who->getInventory()).size(); i++) {
		if((who->getInventory()).at(i).contains(Potion)){
			(who->getInventory()).erase(i);
			break; 
		}	
	}				
}

void SuperPotion::useItem(Player* who){
	std::cout << "Super potion has been used" << std::endl; 
	who->increaseHealth(50); 
	for(int i=0; i < (who->getInventory()).size(); i++) {
		if((who->getInventory()).at(i).contains(SuperPotion)){
			(who->getInventory()).erase(i);
			break; 
		}
	}		
}