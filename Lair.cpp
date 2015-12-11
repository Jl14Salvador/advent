/*
 * Lair.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
 */
#include "Lair.h"
using namespace std;

Lair::Lair() {
	smaug = new Enemy("Smaug", 1000, 60);
	quit = false;

}
/**
 * This method executes the logics of the Lair chapter
 */
void Lair::run(Player* p){
	cout << text.welcomeMsg;
	cout << text.story1; 
	cout << text.story2; 
	
	bool endEnvironment = false;
	do
	{
		endEnvironment = playerSequence(p);
		break;
		
	} while (!endEnvironment);
	if(p->isAlive() && quit == false) {		
		cout << text.exitMsg << endl; 
		cout << "***************************************************************************" << endl; 
	}
	else 
		cout << "You failed to beat Smaug." << endl;
}

bool Lair::playerSequence(Player* p){

	cout << text.enemyMsg; 
	
	bool end = false;
	bool valid_choice = true;

	this->printEnviroInstruct();
	do {	
		char userOpt = validateData();
		switch(userOpt){
			case 'Q':
				cout << "\nCannot quit! This is the final stage of the game! \n";
				break;
			case 'a':
				startFight(p);
				valid_choice = false;
				end = true;
				break;
			case 'h':
				this->printEnviroInstruct();
				break;
			default:
				cout << "Invalid choice, please try again, or enter 'h' for help.\n";
		}
	} while(valid_choice);

	return end; 
}

void Lair::startFight(Player* player) {
	cout << "Battle entered:" << endl; 

	this->printInstruction();
	do {
		char input = validateData();  
		switch(input){
			case 'i':
				player->showItems(); 
				break;
			case 'a':
				player->attack(smaug); 
				if(smaug->isAlive()){
					cout << smaug->getName() << " attacked back!";
					smaug->attack(player); 					
				}
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
			case 'h': 
				this->printInstruction();
				break; 
			default:
			std::cout << "Chose wrong option, please try again, type h for options.\n"; 
		}
	}while(player->isAlive() && smaug->isAlive());
}
