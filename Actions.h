#ifndef ACTIONS_H
#define ACTIONS_H

#include "Character.h"

class Actions {
public: 
	Actions(){}; 
	virtual ~Actions(){}; 
	virtual void doAction(Character* c) = 0; //pure virtual 

private:
	
};

class Attack : public Actions {
public: 
	Attack(){};
	virtual ~Attack(){}; 
	void doAction(Character* c);
		
private: 

};

class Talk : public Actions {
public: 
	Talk(){}; 
	virtual ~Talk(){};
	void doAction(Character* c); 

private: 

};

class Ignore : public Actions {
public: 
	Ignore(){};
	virtual ~Ignore(){}; 
	void doAction(Character* c); 

private: 

};

class Skip : public Actions {
public: 
	Skip(){}; 
	virtual ~Skip(){}; 
	void doAction(Character* c); 

private: 

};

#endif

