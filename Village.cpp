/*
 * Village.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
 */
#include "Village.h"
#include <stdio.h>

using namespace std;

Village::Village() {
	dijistra = new Enemy("Dijistra", 200, 10);
	quit = false; 
}
/**
 * This method executes the logics of the Village chapter
 */

void Village::run(Player* p){
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
		p->addGem();	
		switch(p->getGems()) {
			cout << p->getGems() << " this many gems" << endl; 
			case 1:				
				p->setWeapon(new FireAttk); 
				cout << gemMsg.fire1; 		 
				reportGems(p); 
				cout << gemMsg.fire2; 
				break; 
			case 2:
				p->setWeapon(new IceAttk); 
				cout << gemMsg.ice1; 		 
				reportGems(p); 
				cout << gemMsg.ice2; 
				break; 
			case 3:
				p->setWeapon(new Quake); 
				cout << gemMsg.earth1; 		 
				reportGems(p); 
				cout << gemMsg.earth2; 
				break; 
			case 4:
				p->setWeapon(new MasterSword); 
				cout << gemMsg.rainbow1; 		 
				reportGems(p); 
				cout << gemMsg.rainbow2; 
				break;
			default:
				cout << "No new attack acquired" << endl; 
		}
		cout << text.exitMsg << endl; 
		cout << "***************************************************************************" << endl; 
	}
	else 
		cout << "You failed to pass this environment." << endl; 
}

/*string Village::readHelpFile(){

	ifstream file("help.txt");
	string toReturn;
	string currentLine;
	while(getline(file, currentLine)){
		toReturn += currentLine + "\n";
	}

	return toReturn;
}*/

bool Village::playerSequence(Player* p){

	cout << text.enemyMsg;  
	cout << dijistra->getName() << " wants to attack!" << endl;

	bool end = false;
	bool valid_choice = true;

	this->printEnviroInstruct();
	do {	
		char userOpt = validateData();
		switch(userOpt){
			case 'Q':
				cout << text.exitMsg << endl;
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
				this->printEnviroInstruct();
				break;
			default:
				cout << "Invalid choice, please try again, or enter 'h' for help.\n";
		}
	} while(valid_choice);

	return end; 
}

void Village::startFight(Player* player) {
	cout << "Battle entered:" << endl; 

	this->printInstruction();
	do {
		char input = validateData();  
		switch(input){
			case 'i':
				player->showItems(); 
				break;
			case 'a':
				player->attack(dijistra); 
				if(dijistra->isAlive()){
					cout << dijistra->getName() << " attacked back!";
					dijistra->attack(player); 					
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
	}while(player->isAlive() && dijistra->isAlive());
}