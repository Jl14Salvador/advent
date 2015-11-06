#include "Player.h"
#include "Character.h"
#include <iostream>

int main(void) {

	cout << "Welcome to the Land of Torvold" << endl;
	cout << "Please enter your name: "; 
    string name; 
    cin >> name; 
	Player main = new Player(name, 200);
	cout << "Excellent, you will travel through 4 different environments where 
	you must be defeat the great dragon of the Lands. " << endl; 

	//Create Characters
	Character Berners = new Character("Berners", 200);
	Character Dijistra = new Character("Dijistra", 200); 
	Character Gates = new Character("Gates", 200); 
	Character Ledorf = new Character("Ledorf", 200); 
	Character Dragon = new Character("Dragon", 1000);

	forest _forest = new Forest(); 
	_forest.run(); 

	Village _village = new Village(); 
	_village.run(); 

	Cave _cave = new Cave();
	_cave.run(); 
	
	Castle _castle = new Castle(); 
	_castle.run();


	return 0; 

}