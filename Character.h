#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
public:
	Character(const string CharacterName);
	Character(const string CharacterName, int h); 
	~Character();
	string getName(); 	
	void setName(string n);
 	bool isAlive();
	void kill();  
	void dropHealth(int amount); 
	void increaseHealth(int amount);
	int getHealth(); 

private:
	string name; 
	int health;
};

#endif