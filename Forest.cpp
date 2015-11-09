/*
 * Forest.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
 */
#include "Forest.h"
using namespace std;

Forest::Forest() {
	magnus = new Enemy("Magnus", 300);
	endGame = false;
	welcomeMsg = "You have entered the Forest";
	exitMsg = "You are now leaving the Forest."; 
}
/**
 * This method executes the logics of the Forest chapter
 */
void Forest::run(Player* p){
	cout << welcomeMsg<< endl;
	cout << "The forest is full of dense trees and has an eerie feel to it. " << endl; 
	cout << "You see the remains of a fallen hero, holding a note, it reads 'Go Back, DANGER LIES AHEAD!' " << endl;
	
	bool endEnvironment = false;
	do
	{
		endEnvironment = playerSequence(p);
		break;
		
	} while (!endEnvironment);

	cout << "\nYou have obtained the ice gem! Congratulations, you can now move on to the next environment" << endl; 
	p->addGem(); 
	cout << "You now have " << p->getGems(); 
	if (p->getGems() == 1)
		cout << " gem." << endl; 
	else 
		cout << " gems." << endl; 
	cout << "You now wield the power of ice! Ice Attack inherited! Attack damage increased." << endl; 
	p->setWeapon(new IceAttk); 
	cout << exitMsg << endl; 
	cout << "******************************************************************************************" << endl; 

}

string Forest::readHelpFile(){

	ifstream file("help.txt");
	string toReturn;
	string currentLine;
	while(getline(file, currentLine)){
		toReturn += currentLine + "\n";
	}

	return toReturn;
}

bool Forest::playerSequence(Player* p){

	cout << "Magnus, a sorcerer from the Ancient Mountains of Rai has approached you" << endl;
	cout << magnus->getName() << " says, 'you will never defeat the legendary Dragon! Not unless you go through me!'" << endl;
	bool end = false;

	printEnviroInstruct();
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

void Forest::startFight(Player* player) {
	cout << "Battle entered:" << endl; 
	char input; 
	do {
		printInstruction();
		cin >> input;
		cout << endl; 
		switch(input){
			case 'i':
				player->showItems(); 
				break;
			case 'a':
				player->attack(magnus); 
				break; 
			case 'p':
				player->useItem(new Potion);
			case 'x':
				player->printHealth();  	
				break; 
			default:
			std::cout << "Chose wrong option, please try again"; 
		}
	}while(player->isAlive() && magnus->isAlive());
}

void Forest::printInstruction() {
	cout << "\nPress i to show your inventory list:" << endl;
	cout << "Press a to attack: " << endl; 
	cout << "Press p to use potion: " << endl; 
	cout << "Press b to use bomb: " << endl; 
	cout << "Press s to use superPotion: " << endl; 
	cout << "Press x to view current health: " << endl; 
	cout << "What would you like to do: "; 
}

void Forest::printEnviroInstruct() {
	cout << "\nQ will exit the environment" << endl;
	cout << "a will start the fight" << endl;
	cout << "h will read the help file" << endl; 
	cout << "What would you like to do: ";
}