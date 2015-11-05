#include "Player.h"
#include "Character.h"

int main(void) {
	Player j = new Player("Juan", 200);
	j.kill(); 
	cout << j.getHealth();  

	cout << "Welcome to the Land of Torvold"; 

	//Create Characters
	Character Berners = new Character("Berners", 200);
	Character Dijistra = new Character("Dijistra", 200); 
	Character Gates = new Character("Gates", 200); 
	Character Ledorf = new Character("Ledorf", 200); 
	Character Dragon = new Character("Dragon", 1000);

	return 0; 

}