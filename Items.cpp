#include "Items.h"
#include "Player.h" 
#include <iostream>

void Key::useItem(Player* who) {
	std::cout << "Key has been used" << std::endl; 
	// for(int i=0; i < (who->getInventory()).size(); i++) {
	// 	if((who->getInventory()).at(i)->getName() == "Key") {
	// 		vector<Items*> temp = who->getInventory();
	// 		temp.erase(i);
	// 		// delete temp; 
	// 		break; 
	// 	}	
	// }
}

string Key::getName() const {
	return name; 
}

int Key::getQuantity() const {
	return quantity;
}

void Key::increment() {
	quantity += 1;  
}
		
/*void Scroll::useItem(Player* who) {
	std::cout << "Scroll has been used" << std::endl; 
	for(int i=0; i < (who->getInventory()).size(); i++){
		if((who->getInventory()).at(i)->getName() == "Scroll"){
			vector<Items*> temp = who->getInventory();
			temp.erase(i);
			// delete temp; 
			break; 
		}	
	}		
}

string Scroll::getName() const {
	return name; 
}*/

void Potion::useItem(Player* who) {
	std::cout << "Potion has been used" << std::endl; 
	who->increaseHealth(20); 
	// for(int i=0; i < (who->getInventory()).size(); i++) {
	// 	if((who->getInventory()).at(i)->getName() == "Potion"){
	// 		vector<Items*> temp = who->getInventory();
	// 		temp.erase(i);
	// 		// delete temp; 
	// 		break; 
	// 	}	
	// }				
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

void SuperPotion::useItem(Player* who){
	std::cout << "Super potion has been used" << std::endl; 
	who->increaseHealth(50); 
	
	// for(int i=0; i < (who->getInventory()).size(); i++) {
	// 	if((who->getInventory()).at(i)->getName() == "SuperPotion"){
	// 		vector<Items*> temp = who->getInventory();
	// 		temp.erase(i);
	// 		// delete temp; 
	// 		break; 
	// 	}
	// }		
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