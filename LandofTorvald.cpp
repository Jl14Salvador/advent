#include "LandofTorvold.h"

LandOfTorvald::LandofTorvold() {

	environmentList.push_back(new Forest);
	environmentList.push_back(new Village);
	environmentList.push_back(new Cave);
	environmentList.push_back(new Castle);
	createUser(); 
}

LandofTorvold::run() {

	cout << "Excellent, you will travel through 4 different environments where you  will capture the sacred gems of the world." << endl; 
	cout << " Once you've captured all the gems you will use their powers to defeat the fiersome Dragon that torments the Land. " << endl; 
	cout << "Prepare yourself, for you will fight many battles and must become much stronger to fight greatest opponent. " << endl; 

	environmentList.at(0)->run(_player);
	environmentList.at(1)->run(_player); 
	environmentList.at(2)->run(_player); 
	environmentList.at(3)->run(_player); 

}

void LandofTorvold::createUser() {
	cout << "Please enter your name: "; 
	string name; 
    cin >> name; 
	_player = new Player(name, 200);
}

void LandofTorvold::bossBattle() {

}

