/*
 * Items.h
 *
 *  Created on: Nov 2, 2015
 *      Author: Blinding Eclipse
 */

#ifndef ITEMS_H
#define ITEMS_H

#include "Player.h"

class Player;  //forward declaration
class Character; //forward declaration
class Enemies;  //forward declaration

class Items {
public:
	///Constructors and Destructors
	Items(){};
	virtual ~Items(){};

	///Pure virtual methods
	virtual std::string getName() const = 0;
	virtual int getQuantity() const = 0; 
	virtual void useItem(Player* who) = 0;
	virtual void increment() = 0; 
private:
};

class Bomb : public Items {
public: 
	///Constructors and Destructors
	Bomb() : name("Bomb"), quantity(2) {}
	~Bomb(){}; 

	///Retrieves the name of the item
	std::string getName() const;

	///Retries the quantity of Bombs
	int getQuantity() const; 

	///Method that use the item on the player object that is passed into it, logic for the bomb is done in here
	///Decreases quantity of item
	void useItem(Player* who); 

	///Increase the quantity of Bombs
	void increment(); 

private:
	std::string name; 
	int quantity; 
};


class Potion : public Items {
public: 
	///Constructors and Destructors
	Potion() : name("Potion"), quantity(2) {}
	~Potion(){};

	///Retrieves the name of the item
	std::string getName() const; 

	///Retrieves the quantity of Potions
	int getQuantity() const; 

	///Method that uses the item on the player object that is passed into it, increases health of the hero by 50 health
	///Decreases quantity of item
	void useItem(Player* who); 	

	///Increase the quantity of Potions
	void increment(); 

private: 
	std::string name; 
	int quantity;
};

class SuperPotion : public Items {
public: 
	////Constructors and Destructors
	SuperPotion() : name("SuperPotion"), quantity(10) {};
	~SuperPotion(){};

	///Retrieves the name of the item
	std::string getName() const; 

	///Retrieves the quantity of Super Potions
	int getQuantity() const;

	///Method that uses the item on the player object that is passed into it, increases health of the Player by 50 health
	///Decreases quantity of item
	void useItem(Player* who); 

	///Increases the quantity of Super Potions 
	void increment(); 

private: 
	std::string name; 
	int quantity;
};

#endif