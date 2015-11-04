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
	void useItem(); 
};

class Scroll : public Items {
public: 
	void useItem(); 

private: 
};

class Potion : public Items {
public: 
	void useItem(); 

private: 
};


#endif