#include "LandofTorvold.h"

LandofTorvold::LandofTorvold() {
	createUser(); 
	environmentList.push_back(new Village() );
	environmentList.push_back(new Forest() );	
	environmentList.push_back(new Cave() );
	environmentList.push_back(new Castle() );
	environmentList.push_back(new Lair() ); 
}

void LandofTorvold::run() {
	cout << "Excellent, you will travel through 4 different environments where you  will capture the sacred gems of the world." << endl; 
	cout << "Once you've captured all the gems you will use their powers to defeat the fieresome Dragon that torments the Land. " << endl; 
	cout << "Prepare yourself, for you will fight many battles and must become much stronger to fight your greatest opponent. " << endl; 
	for(unsigned int i = 0; i < environmentList.size(); i++) {
		if(_player->isAlive())
			environmentList.at(i)->run(_player);
		else 
			cout << "Game over" << endl; 
	}

	if(!_player->isAlive())
		cout << "Game Over!" << endl; 

	else {
		for(int i=0; i<9; i++)
			cout << "************************************************************" << endl; 
		cout << "You have defeated Smaug, the merciless Dragon!" << endl; 
		cout << "Congratualtions you win the Game!" << endl; 
	} 
	
}		

void LandofTorvold::createUser() {
	cout << "Please enter your name: "; 
	string name; 
    cin >> name; 
	_player = new Player(name, 500);
}