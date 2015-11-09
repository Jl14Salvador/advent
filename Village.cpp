/*
 * Village.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
 */
#include "Village.h"
using namespace std;

Village::Village() {
	john = new Enemy("John", 200);
	endGame = false;
	welcomeMsg = "Enter 'h' to get help.\nPress 'Enter' key to continue playing...";
	exitMsg = "You have exited the village.";
}
/**
 * This method executes the logics of the village chapter
 */
void Village::run(Player* p){
	cout << welcomeMsg<< endl;
	player = p;
	char envOpt;
	cin >> envOpt;
	if(envOpt == 'h'){
		readHelpFile();
	}

	string storyMsgA = "Hmmm! That guy wearing funny clothes is leaning by his truck. He looks suspicious. What do you want to do?";
	cout << "He's name is John, he is the convenient store owner." << endl;
	
	bool endEnvironment = false;
	do
	{
		endEnvironment = getCharAOpt();
		break;
		
	} while (!endEnvironment);
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

bool Village::getCharAOpt(){

	cout << "While he is a nice store owner, but here are the things you can do to him." << endl;
	cout << "a for attack, h for help, Q (uppercase Q) to quit the environment" << endl;
	bool end = false;

	char userOpt;
	cin >> userOpt;

	///do io data sanitization 

	switch(userOpt){
		case 'Q':
			cout << exitMsg << endl;
			end = true;
			break;
		case 'a':
			while(player)
			break;
		case 'h':
			cout << readHelpFile() << endl;
			break;
		default:
			cout << "Invalid choice, please try again, or enter 'h' for help." << endl;
	}

	return end;
}

void startFight(){
	player->attack(john);
}