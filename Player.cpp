#include "Player.h"
#include <vector>

Player::Player(const string playerName) : Character(playerName) {
	///Set actionList
	actionList.push_back(new Attack);
	actionList.push_back(new Talk);
	actionList.push_back(new Ignore);
	actionList.push_back(new Skip);

	///Set itemList 
	// itemList.push_back(new Scroll); 
	itemList.push_back(new Key); 
	itemList.push_back(new Potion);
	itemList.push_back(new SuperPotion); 
}

Player::Player(const string playerName, int h) : Character(playerName, h) {
	///Set actionList
	actionList.push_back(new Attack);
	actionList.push_back(new Talk);
	actionList.push_back(new Ignore);
	actionList.push_back(new Skip);

	///Set itemList 
	// itemList.push_back(new Scroll); 
	itemList.push_back(new Key);  
	itemList.push_back(new Potion); 
	itemList.push_back(new SuperPotion); 
}

void Player::addItem(Items* it) {
	for(int i=0; i < itemList.size(); i++) {
		if(it->getName() == "Key")
			itemList.at(i)->increment();
		if(it->getName() == "Potion")
			itemList.at(i)->increment(); 
		if(it->getName() == "SuperPotion")
			itemList.at(i)->increment(); 
	}	
}

int Player::hasKey() {
	for(int i=0; i < itemList.size(); i++ ) {
		if(itemList.at(i)->getName() == "Key") {
			return itemList.at(i)->getQuantity(); 
			break;
		}
	}
	return 0; 
}

vector<Items*> Player::getInventory() const {
	return itemList; 
}

