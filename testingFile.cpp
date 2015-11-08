#include "Player.h"
#include "Character.h"
#include "Enemy.h"
#include <iostream>

int main(void) {

	cout << "Welcome to the Land of Torvold" << endl;
	cout << "Please enter your name: "; 
    string name; 
    cin >> name; 
	Player* Player1 = new Player(name, 200);
	cout << "Excellent, you will travel through 4 different environments where you must be defeat the great dragon of the Lands. " << endl; 

	//Create Characters
	Enemy* Berners = new Enemy("Berners", 200);
	Enemy* Dijistra = new Enemy("Dijistra", 200); 
	Enemy* Gates = new Enemy("Gates", 200); 
	Enemy* Ledorf = new Enemy("Ledorf", 200); 
	Enemy* Dragon = new Enemy("Dragon", 1000);

	///Testing Attacks
	cout << endl << "Testing Attacks: \n";
	do {
		Player1->attack(Berners);
		Player1->setWeapon(new FireAttk);
		Player1->attack(Berners); 
		Player1->setWeapon(new IceAttk);
		Player1->attack(Berners); 
		Player1->setWeapon(new Quake);
		Player1->attack(Berners);
	} while(Berners->isAlive());
	
	///Testing Gems
	cout << endl << "Testing Gems: \n";
	cout << "# of gems: " << Player1->getGems() << endl; 
	Player1->addGem(); 
	cout << "# of gems: " << Player1->getGems() << endl; 

	///Testing inventory
	cout << endl << "Testing Inventory: \n";
	Player1->showItems();
	cout << endl; 
	Player1->addItem(new Bomb);
	Player1->addItem(new Potion); 
	Player1->addItem(new SuperPotion);
	cout << endl; 
	Player1->showItems(); 
	Player1->useItem(new Bomb);
	cout << "Checking inventory..." << endl; 
	Player1->showItems(); 

	//Using Potions

	cout << "Player's Health: " << Player1->getHealth() << endl; 
	Player1->useItem(new Potion);
	cout << "Player's Health: " << Player1->getHealth() << endl; 
	Player1->useItem(new SuperPotion);
	cout << "Player's Health: " << Player1->getHealth() << endl; 
	Player1->useItem(new SuperPotion); 


/*
	forest _forest = new Forest(); 
	_forest.run(); 

	Village _village = new Village(); 
	_village.run(); 

	Cave _cave = new Cave();
	_cave.run(); 
	
	Castle _castle = new Castle(); 
	_castle.run();*/

	delete Berners; 
	delete Dijistra;
	delete Gates;
	delete Ledorf; 
	delete Dragon; 
	delete Player1; 

	return 0; 

}