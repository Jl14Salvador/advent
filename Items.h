/*
 * Items.h
 *
 *  Created on: Nov 2, 2015
 *      Author: Blinding Eclipse
 */

#ifndef ITEMS_H
#define ITEMS_H

#include "Player.h"

class Player; 
class Character; 
class Enemies; 

class Items {
public:
	Items(){};
	virtual ~Items(){};
	virtual std::string getName() const = 0;
	virtual int getQuantity() const = 0; 
	virtual void useItem(Player* who) = 0;
	virtual void increment() = 0; 
private:
};

class Bomb : public Items {
public: 
	Bomb() : name("Bomb"), quantity(2) {}
	~Bomb(){}; 
	std::string getName() const;
	int getQuantity() const; 
	void useItem(Player* who); 
	void increment(); 


private:
	std::string name; 
	int quantity; 
};


class Potion : public Items {
public: 
	Potion() : name("Potion"), quantity(2) {}
	~Potion(){};
	std::string getName() const; 
	int getQuantity() const; 
	void useItem(Player* who); 		
	void increment(); 

private: 
	std::string name; 
	int quantity;
};

class SuperPotion : public Items {
public: 
	SuperPotion() : name("SuperPotion"), quantity(10) {};
	~SuperPotion(){};
	std::string getName() const; 
	int getQuantity() const;
	void useItem(Player* who); 
	void increment(); 

private: 
	std::string name; 
	int quantity;
};

#endif