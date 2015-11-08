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