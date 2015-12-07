
#include "LandofTorvold.h"

LandofTorvold::LandofTorvold() {
	createUser(); 
	environmentList.push_back(new Village() );
	environmentList.push_back(new Forest() );	
	environmentList.push_back(new Cave() );
	environmentList.push_back(new Castle() );
	smaug = new Enemy("Smaug", 1000, 60);
}

void LandofTorvold::run() {

	cout << "Excellent, you will travel through 4 different environments where you  will capture the sacred gems of the world." << endl; 
	cout << "Once you've captured all the gems you will use their powers to defeat the fieresome Dragon that torments the Land. " << endl; 
	cout << "Prepare yourself, for you will fight many battles and must become much stronger to fight your greatest opponent. " << endl; 
	for(unsigned int i = 0; i < environmentList.size(); i++) {
		if(_player->isAlive())
			environmentList.at(i)->run(_player);
		else 
			cout << "Game over" << endl; 
	}

	if(_player->isAlive() )
		bossBattle(); 

	if(!_player->isAlive())
		cout << "Game Over!" << endl; 

	else {
		cout << "You have defeated Smaug, the merciless Dragon, you win the Game!" << endl; 
		for(int i=0; i<9; i++)
			cout << "************************************************************" << endl; 
	} 
	
}
		

void LandofTorvold::createUser() {
	cout << "Please enter your name: "; 
	string name; 
    cin >> name; 
	_player = new Player(name, 500);
}

void LandofTorvold::bossBattle() {
	cout << "You've encountered Smaug the dragon, its time to fight!!!" << endl; 
	cout << "He's been waiting for you, but you now have the Master Sword and the power of all the gems" << endl; 
	startFight(_player); 
}

void LandofTorvold::startFight(Player* player) {
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
				player->attack(smaug);
				if(smaug->isAlive()){
					cout << smaug->getName() << " attacked back!" << endl; 
					smaug->attack(player); 
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
			cout << "Chose wrong option, please try again"; 
		}
	}while(player->isAlive() && smaug->isAlive());
}

void LandofTorvold::printInstruction(){
	cout << "\nPress i to show your inventory list:" << endl;
	cout << "Press a to attack: " << endl; 
	cout << "Press p to use potion: " << endl; 
	cout << "Press b to use bomb: " << endl; 
	cout << "Press s to use superPotion: " << endl; 
	cout << "Press x to view current health: " << endl; 
	cout << "What would you like to do: "; 
}

void LandofTorvold::printEnviroInstruct() {
	cout << "\nQ will exit the environment" << endl;
	cout << "a will start the fight" << endl;
	cout << "h will read the help file" << endl; 
	cout << "What would you like to do: ";
}