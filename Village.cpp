/*
 * Village.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Blinding Eclipse
 */

#include "Enviros.h"
#include "Player.h"
using namespace std;

Village::Village() {
	Enemy* john = new Enemy();
	endGame = false;
	welcomeMessage = "You have entered the village of Carstarirs. Enter 'h' to get help.\nPress 'Enter' key to continue playing...";
	exitMessage = "You have exited the village.";
}

/**
 * This method executes the logics of the village chapter
 */
void Village::run(Player* player){

	cout << "DEBUG MSG: Village is run" << endl; 

	cout << welcomeMessage << endl;

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

	bool end = false;

	char userOpt;
	cin >> userOpt;

	///do io data sanitization 

	switch(userOpt){
		case 'Q':
			cout << exitMessage << endl;
			end = true;
			break;
		case 'a':
			player -> attack(player, john, 'a');
			break;
		case 'h':
			cout << readHelpFile() << endl;
			break;
		default:
			cout << "Invalid choice, please try again, or enter 'h' for help." << endl;
	}

	return end;
}