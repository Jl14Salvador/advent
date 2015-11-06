#include "Player.h"

void Character::addItem(Items* i){
	itemList.push_back(i); 
}

bool Character::haskey() {
	if(actionList.contains(Key))
		return true;
	else
		return false;  
}

vector<Items*> Character::getInventory() {
	return itemLIst; 
}

