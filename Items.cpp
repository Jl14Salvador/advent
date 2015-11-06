#include "Items.h"
#include <iostream>

void Key::useItem(Character* who)) {
	std::cout << "Key has been used" << std::endl; 
	for(int i=0; i < who->getInventory.size(); i++)
		if(who->getInventory.at(i).contains(Key)){
			who->getInventory.erase(i);
			break; 
		}	
}

void Scroll::useItem(Character* who)) {
	std::cout << "Scroll has been used" << std::endl; 
	for(int i=0; i < who->getInventory.size(); i++)
		if(who->getInventory.at(i).contains(Scroll)){
			who->getInventory.erase(i);
			break; 
		}	
}

void Potion::useItem(Character* who)) {
	std::cout << "Potion has been used" << std::endl; 
	who->increaseHealth(20); 
	for(int i=0; i < who->getInventory.size(); i++)
		if(who->getInventory.at(i).contains(Potion)){
			who->getInventory.erase(i);
			break; 
		}			
}

void SuperPotion::useItem(Character*){
	std::cout << "Super potion has been used" << std::endl; 
	who->increaseHealth(50); 
	for(int i=0; i < who->getInventory.size(); i++)
		if(who->getInventory.at(i).contains(SuperPotion)){
			who->getInventory.erase(i);
			break; 
		}
}