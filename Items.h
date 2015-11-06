#ifndef ITEMS_H
#define ITEMS_H

#include "Character.h"
class Items {
public:
	Items() {};
	~Items() {};
	virtual void useItem(Character* who) = 0;

private:
};

class Key : public Items {
public: 
	Key() {}; 
	~Key() {}; 
	void useItem(Character* who); 
};

class Scroll : public Items {
public: 
	Scroll() {};
	~Scroll() {};
	void useItem(Character* who)); 

private: 
};

class Potion : public Items {
public: 
	Potion() {};
	~Potion() {};
	void useItem(Character* who)); 

private: 
};

class SuperPotion : public Items {
public: 
	Potion() {};
	~Potion() {};
	void useItem(Character* who)); 

private: 
};


#endif