/*
 * Weapon.h
 *
 *  Created on: Nov 2, 2015
 *      Author: Blinding Eclipse
 */
 
#ifndef WEAPON_H
#define WEAPON_H

#include "Character.h"

class Weapon {
public:
	Weapon(){};
	~Weapon(){};
	virtual void attack(Character* attacker, Character* who) = 0; 

private: 

};

class BasicAttk : public Weapon {
public: 
	BasicAttk() : attackDamage(20) {}
	~BasicAttk(){}; 
	void attack(Character* attacker, Character* who);

private: 
	int attackDamage; 
};

class FireAttk : public Weapon {
public: 
	FireAttk() : attackDamage(40) {}
	~FireAttk(){};
	void attack(Character* attacker, Character* who);

private: 
	int attackDamage; 
};

class IceAttk : public Weapon {
public: 
	IceAttk() : attackDamage(60) {}
	~IceAttk(){};
	void attack(Character* attacker, Character* who);

private: 
	int attackDamage; 
};

class Quake : public Weapon {
public: 
	Quake() : attackDamage(80) {}
	~Quake(){};
	void attack(Character* attacker, Character* who); 

private: 
	int attackDamage; 
};

class MasterSword : public Weapon {
public: 
	MasterSword() : attackDamage(100) {}
	~MasterSword(){};
	void attack(Character* attacker, Character* who); 

private: 
	int attackDamage; 
};

#endif

