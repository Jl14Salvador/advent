#include "Enviros.h" 
#include "Player.h" 

Enviros::Enviros() {

}

Enviros::~Enviros() {

}

void Enviros::printInstruction(){
	cout << "\nPress i to show your inventory list:" << endl;
	cout << "Press a to attack: " << endl; 
	cout << "Press p to use potion: " << endl; 
	cout << "Press b to use bomb: " << endl; 
	cout << "Press s to use superPotion: " << endl; 
	cout << "Press x to view current health: " << endl; 
	cout << "What would you like to do: "; 
}

void Enviros::printEnviroInstruct() {
	cout << "\nQ will exit the environment" << endl;
	cout << "a will start the fight" << endl;
	cout << "h will read the help file" << endl; 
	cout << "What would you like to do: ";
}
