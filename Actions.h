#ifndef ACTIONS_H
#define ACTIONS_H

#include "Character.h"

class Actions {
public: 
	Actions(){}; 
	~Actions(){}; 
	virtual void doAction(Character* c) = 0; //pure virtual 

private:
	
};

class Attack : public Actions {
public: 
	Attack(){};
	~Attack(){}; 
	void doAction(Character* c);
		
private: 

};

class Talk : public Actions {
public: 
	Talk(){}; 
	~Talk(){};
	void doAction(Character* c); 

private: 

};

class Ignore : public Actions {
public: 
	Ignore(){};
	~Ignore(){}; 
	void doAction(Character* c); 

private: 

};

class Skip : public Actions {
public: 
	Skip(){}; 
	~Skip(){}; 
	void doAction(Character* c); 

private: 

};

#endif

