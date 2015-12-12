#include "Enviros.h" 
#include "Player.h" 
#include <climits> 


Enviros::Enviros() {

}

Enviros::~Enviros() {

}

void Enviros::printInstruction(){
	cout << "\nPress i to show your inventory list:" << endl;
	cout << "Press a to attack: " << endl; 
	cout << "Press p to use potion: " << endl; 
	cout << "Press y to use powerUp: " << endl; 
	cout << "Press s to use superPotion: " << endl; 
	cout << "Press x to view current health: " << endl; 
	cout << "Press h to read the current menu help file" << endl; 
}

void Enviros::printEnviroInstruct() {
	cout << "\nQ will exit the environment" << endl;
	cout << "a will start the fight" << endl;
	cout << "h will read the current menu help file" << endl; 
}

char Enviros::validateData(){
	//initialize input to a default value that will trigger a default value in the switch statement
	char input = 'e';	
	string stringInput; 
	bool badInput = true;  
	while(badInput){
		cin.clear();
		cin.ignore(INT_MAX, '\n'); 
		cout << "What would you like to do: ";
		cin >> stringInput; 
		cout << endl; 
		if(stringInput.length() != 1){
			cout << "Bad input, please try again. \n";				
		}				
		else {
		   input = stringInput[0];
		   badInput = false; 				
		}	
	}	 
	return input; 
}

void Enviros::reportGems(Player* p) {
	cout << "You now have " << p->getGems(); 
		if (p->getGems() == 1)
			cout << " gem.";
		else 
			cout << " gems.";
}

