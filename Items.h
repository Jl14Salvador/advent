#ifndef ITEMS_H
#define ITEMS_H

#include "Player.h"

class Player; 
class Character; 
class Enemies; 

class Items {
public:
	Items(){};
	~Items(){};
	virtual std::string getName() const = 0;
	virtual int getQuantity() const = 0; 
	virtual void useItem(Player* who) = 0;
	virtual void increment() = 0; 
private:
};

class Key : public Items {
public: 
	Key() : name("Key"), quantity(0) {}
	virtual ~Key(){}; 
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
	Potion() : name("Potion"), quantity(0) {}
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
	SuperPotion() : name("SuperPotion"), quantity(0) {};
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