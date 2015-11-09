#include "Player.h"
#include <vector>

Player::Player(const string playerName) : Character(playerName), gems(0) {
	_weapon = new BasicAttk; 

	///Set itemList 
	itemList.push_back(new Bomb); 
	itemList.push_back(new Potion);
	itemList.push_back(new SuperPotion); 
}

Player::Player(const string playerName, int h) : Character(playerName, h), gems(0){
	_weapon = new BasicAttk; 

	///Set itemList 
	itemList.push_back(new Bomb);  
	itemList.push_back(new Potion); 
	itemList.push_back(new SuperPotion); 
}

Player::~Player(){
	delete _weapon; 
	for(int i=0; i<itemList.size(); i++)
		delete itemList.at(i); 
}

void Player::addItem(Items* it) {
	for(int i=0; i < itemList.size(); i++) {
		if(it->getName() == "Bomb" && itemList.at(i)->getName() == "Bomb"){
			std::cout<< "Adding Bomb..." << endl; 
			itemList.at(i)->increment();
		}
			
		if(it->getName() == "Potion" && itemList.at(i)->getName() == "Potion"){
			std::cout<< "Adding Potion..." << endl; 
			itemList.at(i)->increment(); 
		}
			
		if(it->getName() == "SuperPotion" && itemList.at(i)->getName() == "SuperPotion"){
			std::cout<< "Adding SuperPotion..." << endl; 
			itemList.at(i)->increment(); 
		}		
	}	
}

void Player::useItem(Items* it) {
	for(int i=0; i < itemList.size(); i++) {
		if(it->getName() == "Bomb" && itemList.at(i)->getName() == "Bomb"){
			std::cout<< "Using Bomb..." << endl; 
			itemList.at(i)->useItem(this);
		}
			
		if(it->getName() == "Potion" && itemList.at(i)->getName() == "Potion"){
			std::cout<< "Using Potion..." << endl; 
			itemList.at(i)->useItem(this); 
		}

		if(it->getName() == "SuperPotion" && itemList.at(i)->getName() == "SuperPotion"){
			std::cout<< "Using SuperPotion..." << endl; 
			itemList.at(i)->useItem(this); 
		}		
	}	
}

vector<Items*> Player::getInventory() const {
	return itemList; 
}

void Player::showItems() const{
	for(int i=0; i<itemList.size(); i++){
		std::cout << "You have " << itemList.at(i)->getQuantity() << " " << itemList.at(i)->getName();
		if(itemList.at(i)->getQuantity() == 1) 
			cout << ".\n";
		else 
			cout << "s.\n";			
	}

}

void Player::attack(Character* who) {
	_weapon->attack(this, who); 
}

void Player::setWeapon(Weapon* weaponType){
	_weapon = weaponType; 
}

void Player::addGem() {
	gems++;
}

int Player::getGems() const {
	return gems; 
}

