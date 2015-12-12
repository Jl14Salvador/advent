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
	///Constructors and Destructors 
	Weapon(){};
	virtual ~Weapon(){};

	///Pure virtual methods
	virtual void attack(Character* attacker, Character* who) = 0; 	
	virtual void powerUp() = 0; 
	virtual bool getIsPowered() = 0; 

private: 
};

class BasicAttk : public Weapon {
public: 
	///Constructors and Destructors 
	BasicAttk() : attackDamage(20) {}
	~BasicAttk(){}; 

	///Attack method that takes in an attacker and who will be attacked Character objects
	///Who will be damaged by the attackDamage of BasicAttk
	///Attacker receives counter damage equal to half the attackDamage
	///Outputs to the screen what happens
	void attack(Character* attacker, Character* who);

	///Changes the isPowered variable to true, will double attack damage once
	void powerUp(); 

	///Returns the isPowered variable 
	bool getIsPowered(); 

private: 
	int attackDamage; 
	bool isPowered; 	
};

class FireAttk : public Weapon {
public: 
	///Constructors and Destructors
	FireAttk() : attackDamage(40), isPowered(false) {}
	~FireAttk(){};

	///Attack method that takes in an attacker and who will be attacked Character objects
	///Who will be damaged by the attackDamage of FireAttk
	///Attacker receives counter damage equal to half the attackDamage
	///Outputs to the screen what happens
	void attack(Character* attacker, Character* who);

	///Changes the isPowered variable to true, will double attack damage once
	void powerUp(); 

	///Returns the isPowered variable 
	bool getIsPowered(); 

private: 
	int attackDamage; 
	bool isPowered; 
};

class IceAttk : public Weapon {
public: 
	///Constructors and Destructors
	IceAttk() : attackDamage(60), isPowered(false) {}
	~IceAttk(){};

	///Attack method that takes in an attacker and who will be attacked Character objects
	///Who will be damaged by the attackDamage of IceAttk
	///Attacker receives counter damage equal to half the attackDamage
	///Outputs to the screen what happens
	void attack(Character* attacker, Character* who);

	///Changes the isPowered variable to true, will double attack damage once
	void powerUp(); 

	///Returns the isPowered variable 
	bool getIsPowered(); 

private: 
	int attackDamage; 
	bool isPowered; 
};

class Quake : public Weapon {
public: 
	///Constructors and Destructors
	Quake() : attackDamage(80), isPowered(false) {}
	~Quake(){};

	///Attack method that takes in an attacker and who will be attacked Character objects
	///Who will be damaged by the attackDamage of Quake
	///Attacker receives counter damage equal to half the attackDamage
	///Outputs to the screen what happens
	void attack(Character* attacker, Character* who); 

	///Changes the isPowered variable to true, will double attack damage once
	void powerUp(); 

	///Returns the isPowered variable 
	bool getIsPowered(); 

private: 
	int attackDamage;
	bool isPowered;  
};

class MasterSword : public Weapon {
public: 
	///Constructors and Destructors
	MasterSword() : attackDamage(100), isPowered(false) {}
	~MasterSword(){};

	///Attack method that takes in an attacker and who will be attacked Character objects
	///Who will be damaged by the attackDamage of MasterSword
	///Attacker receives counter damage equal to half the attackDamage
	///Outputs to the screen what happens
	void attack(Character* attacker, Character* who); 

	///Changes the isPowered variable to true, will double attack damage once
	void powerUp(); 

	///Returns the isPowered variable 
	bool getIsPowered(); 

private: 
	int attackDamage; 
	bool isPowered; 
};

#endif

