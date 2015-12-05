/*
 * Cave.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
 */
#include "Cave.h"
 #include "Text.cpp"
using namespace std;

Cave::Cave() {
	berners = new Enemy("Berners", 350, 30);
	quit = false; 
	welcomeMsg = "\nYou have entered the Cave.\n";
	exitMsg = "You are now leaving the Cave.\n"; 
}
/**
 * This method executes the logics of the Cave chapter
 */
void Cave::run(Player* p){
	cout << welcomeMsg;
	cout << "You hear bats in the distance, mosquitos buzzing, and water dripping from afar. " << endl; 
	cout << "This cave feels cold and lifeless... " << endl;
	
	bool endEnvironment = false;
	do
	{
		endEnvironment = playerSequence(p);
		break;
		
	} while (!endEnvironment);
	if(p->isAlive() && quit == false){
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
	else
		cout << "You have failed to pass this environment." << endl; 
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
				if(berners->isAlive()){
					cout << berners->getName() << " attacked back!" << endl; 
					berners->attack(player); 					
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
	}while(player->isAlive() && berners->isAlive());
}