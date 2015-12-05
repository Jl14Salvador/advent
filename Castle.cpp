/*
 * Castle.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
 */
#include "Castle.h"
using namespace std;

Castle::Castle() {
	ledorf = new Enemy("King Ledorf", 400, 40);
	quit = false;
	welcomeMsg = "\nYou have entered the Castle.\n";
	exitMsg = "You are now leaving the Castle.\n"; 
}
/**
 * This method executes the logics of the Castle chapter
 */
void Castle::run(Player* p){
	cout << welcomeMsg;
	cout << "The castle is massive. It is the largest building you have ever seen. " << endl; 
	cout << "Its bricks stretch across the vast Mountain range, this where the final gem lies. " << endl;
	
	bool endEnvironment = false;
	do
	{
		endEnvironment = playerSequence(p);
		break;
		
	} while (!endEnvironment);
	if(p->isAlive() && quit == false){
		cout << "\nYou have obtained the Rainbow gem! Congratulations, you have obtained all four gems! You can now fight the Dragon!" << endl; 
		p->addGem(); 
		cout << "You now have " << p->getGems(); 
		if (p->getGems() == 1)
			cout << " gem." << endl; 
		else 
			cout << " gems." << endl; 
		cout << "You now wield the Master Sword! You now have the most powerful weapon known to man! Attack damage at maximum." << endl; 
		p->setWeapon(new MasterSword); 
		cout << exitMsg << endl; 
		cout << "******************************************************************************************" << endl; 
	}
	else
		cout << "You have failed to pass this environment." << endl; 
}

string Castle::readHelpFile(){

	ifstream file("help.txt");
	string toReturn;
	string currentLine;
	while(getline(file, currentLine)){
		toReturn += currentLine + "\n";
	}

	return toReturn;
}

bool Castle::playerSequence(Player* p){

	cout << "This is the home of King Ledorf, the strongest human being in all of Torvold. " << endl;
	cout << "There he is! " << ledorf->getName() << "! 'You will never have the last and most powerful gem!'" << endl;
	bool end = false;
	bool valid_choice = true; 
	do{
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
				cout << "Help" << endl;
				break;
			default:
				cout << "Invalid choice, please try again, or enter 'h' for help." << endl;
		}
	}while(valid_choice); 
	return end;
}

void Castle::startFight(Player* player) {
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
				player->attack(ledorf);
				if(ledorf->isAlive()){
					cout << ledorf->getName() << " attacked back!" << endl; 
					ledorf->attack(player);  					
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
			default:
			std::cout << "Chose wrong option, please try again"; 
		}
	}while(player->isAlive() && ledorf->isAlive());
}
