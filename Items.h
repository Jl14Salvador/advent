#ifndef ITEMS_H
#define ITEMS_H

#include "Player.h"

class Player; 
class Character; 

class Items {
public:
	Items(){};
	~Items(){};
	virtual void useItem(Player* who) = 0;

private:
};

class Key : public Items {
public: 
	Key(){}; 
	~Key(){}; 
	void useItem(Player* who); 
};

class Scroll : public Items {
public: 
	Scroll(){};
	~Scroll(){};
	void useItem(Player* who); 

private: 
};

class Potion : public Items {
public: 
	Potion(){};
	~Potion(){};
	void useItem(Player* who); 

private: 
};

class SuperPotion : public Items {
public: 
	Potion(){};
	~Potion(){};
	void useItem(Player* who); 

private: 
};


#endif