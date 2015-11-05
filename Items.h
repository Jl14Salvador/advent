#ifndef ITEMS_H
#define ITEMS_H

class Items {
public:
	Items() {};
	~Items() {};
	virtual void useItem() = 0;

private:
};

class Key : public Items {
public: 
	Key() {}; 
	~Key() {}; 
	void useItem(); 
};

class Scroll : public Items {
public: 
	Scroll() {};
	~Scroll() {};
	void useItem(); 

private: 
};

class Potion : public Items {
public: 
	Potion() {};
	~Potion() {};
	void useItem(); 

private: 
};


#endif