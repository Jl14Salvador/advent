/*
 * Cave.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
 */
#include "Cave.h"
using namespace std;

Cave::Cave() {
	berners = new Enemy("Berners", 300);
	endGame = false;
	welcomeMsg = "You have entered the Cave";
	exitMsg = "You are now leaving the Cave."; 
}
/**
 * This method executes the logics of the Cave chapter
 */
void Cave::run(Player* p){
	cout << welcomeMsg<< endl;
	cout << "You hear bats in the distance, mosquitos buzzing, and water dripping from afar. " << endl; 
	cout << "This cave feels cold and lifeless... " << endl;
	
	bool endEnvironment = false;
	do
	{
		endEnvironment = playerSequence(p);
		break;
		
	} while (!endEnvironment);

	cout << "\nYou have obtained the earth gem! Congratulations, you can now move on to the next environment" << endl; 
	p->addGem(); 
	cout << "You now have " << p->getGems(); 
	if (p->getGems() == 1)
		cout << " gem." << endl; 
	else 
		cout << " gems." << endl; 
	cout << "You now wield the power of earth! Quake attack inherited! Attack damage increased." << endl; 
	p->setWeapon(new Quake); 
	cout << exitMsg << endl; 
	cout << "******************************************************************************************" << endl; 

}

string Cave::readHelpFile(){

	ifstream file("help.txt");
	string toReturn;
	string currentLine;
	while(getline(file, currentLine)){
		toReturn += currentLine + "\n";
	}

	return toReturn;
}

bool Cave::playerSequence(Player* p){

	cout << "Berners, a beast of great strength is lurking, he draws near. A dead carcus lies beside him." << endl;
	cout << berners->getName() << " has attacked!" << endl;
	bool end = false;

	this->printEnviroInstruct();
	char userOpt;
	cin >> userOpt;

	///do io data sanitization 
	bool valid_choice = true; 
	while(valid_choice){
		switch(userOpt){
			case 'Q':
				cout << exitMsg << endl;
				valid_choice = false;
				end = true;
				break;
			case 'a':
				startFight(p);
				valid_choice = false;
				end = true;
				break;
			case 'h':
				cout << readHelpFile() << endl;
				break;
			default:
				cout << "Invalid choice, please try again, or enter 'h' for help." << endl;
				valid_choice = false; 
		}
	}
	return end;
}

void Cave::startFight(Player* player) {
	cout << "Battle entered:" << endl; 
	char input; 
	do {
		this->printInstruction();
		cin >> input;
		cout << endl; 
		switch(input){
			case 'i':
				player->showItems(); 
				break;
			case 'a':
				player->attack(berners); 
				break; 
			case 'p':
				player->useItem(new Potion);
			case 'x':
				player->printHealth();  	
				break; 
			case 's':
				player->useItem(new SuperPotion);
				break; 
			case 'b':
				player->useItem(new Bomb);
				break; 	
			default:
			std::cout << "Chose wrong option, please try again"; 
		}
	}while(player->isAlive() && berners->isAlive());
}

/*void Cave::printInstruction() {
	cout << "\nPress i to show your inventory list:" << endl;
	cout << "Press a to attack: " << endl; 
	cout << "Press p to use potion: " << endl; 
	cout << "Press b to use bomb: " << endl; 
	cout << "Press s to use superPotion: " << endl; 
	cout << "Press x to view current health: " << endl; 
	cout << "What would you like to do: "; 
}

void Cave::printEnviroInstruct() {
	cout << "\nQ will exit the environment" << endl;
	cout << "a will start the fight" << endl;
	cout << "h will read the help file" << endl; 
	cout << "What would you like to do: ";
}*/