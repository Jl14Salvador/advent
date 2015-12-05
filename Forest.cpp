/*
 * Forest.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
 */
#include "Forest.h"
#include "Text.cpp"
using namespace std;

Forest::Forest() {
	magnus = new Enemy("Magnus", 300, 20);
	quit = false; 
	welcomeMsg = "\nYou have entered the Forest.\n";
	exitMsg = "You are now leaving the Forest.\n"; 
}
/**
 * This method executes the logics of the Forest chapter
 */
void Forest::run(Player* p){
	cout << welcomeMsg;
	cout << "The forest is full of dense trees and has an eerie feel to it. " << endl; 
	cout << "You see the remains of a fallen hero, holding a note, it reads 'Go Back, DANGER LIES AHEAD!' " << endl;
	
	bool endEnvironment = false;
	do
	{
		endEnvironment = playerSequence(p);
		break;
		
	} while (!endEnvironment);
	if(p->isAlive() && quit == false) {
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
	else
		cout << "You have failed to pass this environment." << endl; 

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
	bool valid_choice = true; 
	do {
		this->printEnviroInstruct();
		char userOpt;
		cin >> userOpt;
		switch(userOpt){
			case 'Q':
				cout << exitMsg << endl;
				valid_choice = false;
				end = true;
				quit = true; 
				break;
			case 'a':
				startFight(p);
				valid_choice = false;
				end = true;
				break;
			case 'h':
				cout << "Help!" << endl; 
				break;
			default:
				cout << "Invalid choice, please try again, or enter 'h' for help." << endl;
		}
	} while(valid_choice); 
	return end;
}

void Forest::startFight(Player* player) {
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
				player->attack(magnus); 
				if(magnus->isAlive()){
					cout << magnus->getName() << " attacked back!" << endl; 
					magnus->attack(player); 					
				}
				break; 
			case 'p':
				player->useItem(new Potion);
				break; 
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
	}while(player->isAlive() && magnus->isAlive());
}
