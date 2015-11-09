/*
 * Village.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
 */
#include "Village.h"
using namespace std;

Village::Village() {
	dijistra = new Enemy("Dijistra", 200);
	endGame = false;
	welcomeMsg = "You have entered the Village";
	exitMsg = "You are now leaving the Village."; 
}
/**
 * This method executes the logics of the Village chapter
 */
void Village::run(Player* p){
	cout << welcomeMsg<< endl;
	cout << "There's nobdy in sight. The Village is abandoned. You walk around the houses, searching for the first gem." << endl;
	cout << "It is very quiet. Too quiet..." << endl;
	
	bool endEnvironment = false;
	do
	{
		endEnvironment = playerSequence(p);
		break;
		
	} while (!endEnvironment);
	if(p->isAlive()) {
		cout << "\nYou have obtained the fire gem! Congratulations, you can now move on to the next environment" << endl; 
		p->addGem(); 
		cout << "You now have " << p->getGems(); 
		if (p->getGems() == 1)
			cout << " gem." << endl; 
		else 
			cout << " gems." << endl; 
		cout << "You now wield the power of Fire! Fire Attack inherited! Attack damage increased." << endl; 
		p->setWeapon(new FireAttk); 
		cout << exitMsg << endl; 
		cout << "**********************************************************************************" << endl; 
	}
	else 
		cout << "You failed to pass this environment." << endl; 

}

string Village::readHelpFile(){

	ifstream file("help.txt");
	string toReturn;
	string currentLine;
	while(getline(file, currentLine)){
		toReturn += currentLine + "\n";
	}

	return toReturn;
}

bool Village::playerSequence(Player* p){

	cout << "Dijistra a swordsman has appeared. He is a competent foe." << endl; 
	cout << dijistra->getName() << " wants to attack!" << endl;
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

void Village::startFight(Player* player) {
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
				player->attack(dijistra); 
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
	}while(player->isAlive() && dijistra->isAlive());
}

/*void Village::printInstruction() {
	cout << "\nPress i to show your inventory list:" << endl;
	cout << "Press a to attack: " << endl; 
	cout << "Press p to use potion: " << endl; 
	cout << "Press b to use bomb: " << endl; 
	cout << "Press s to use superPotion: " << endl; 
	cout << "Press x to view current health: " << endl; 
	cout << "What would you like to do: "; 
}

void Village::printEnviroInstruct() {
	cout << "\nQ will exit the environment" << endl;
	cout << "a will start the fight" << endl;
	cout << "h will read the help file" << endl; 
	cout << "What would you like to do: ";
}*/