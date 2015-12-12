#ifndef TEXT_CPP
#define TEXT_CPP

#include <iostream> 
using namespace std; 

struct VillageText {
	string welcomeMsg = "\nYou have entered the Village\n";
	string exitMsg = "You are now leaving the Village.\n"; 
	string story1 = "There's nobdy in sight. The Village is abandoned. You walk around the houses, searching for the first gem.\n";
	string story2 = "It is very quiet. Too quiet...\n"; 
	string enemyMsg = "Dijistra a swordsman has appeared. He is a competent foe. \n"; 
}; 

struct ForestText {
	string welcomeMsg = "\nYou have entered the Forest\n";
	string exitMsg = "You are now leaving the Forest.\n"; 
	string story1 = "The forest is full of dense trees and has an eerie feel to it.\n";
	string story2 = "You see the remains of a fallen hero, holding a note, it reads 'Go Back, DANGER LIES AHEAD!'\n";
	string enemyMsg =  "Magnus, a sorcerer from the Ancient Mountains of Rai has approached you.\n"; 
};


struct CaveText {
	string welcomeMsg = "\nYou have entered the Cave\n";
	string exitMsg = "You are now leaving the Cave.\n"; 
	string story1 = "You hear bats in the distance, mosquitos buzzing, and water dripping from afar.\n";  
	string story2 = "This cave feels cold and lifeless... \n"; 
	string enemyMsg = "Berners, a beast of great strength is lurking, he draws near. A dead carcus lies beside him.\n";

};

struct CastleText {
	string welcomeMsg = "\nYou have entered the Castle\n";
	string exitMsg = "You are now leaving the Castle.\n"; 
	string story1 = "The castle is massive. It is the largest building you have ever seen.\n"; 
	string story2 = "Its bricks stretch across the vast Mountain range, this is where the final gem lies.\n";
	string enemyMsg = "This is the home of King Ledorf, the strongest human being in all of Torvold.\n";
};

struct LairText {
	string welcomeMsg = "\nThe time has finally come, you're greatest challenge awaits... \n";
	string exitMsg = "Smaug attempts to attack one more time.... he has no more energy.... he falls to the floor and the Land of Torvold shakes!!\n";
	string story1 = "You've encountered Smaug the dragon, its time to fight!!!\n";
	string story2 = "He's been waiting for you, but you now have the Master Sword and the power of all the gems\n"; 
	string enemyMsg = "You've encountered Smaug the dragon, its time to fight!!! He's been waiting for you, but you now have the Master Sword and the power of all the gems!\n";
};

struct GemText {
	string fire1 = "\nYou have obtained the fire gem! Congratulations, you can now move on to the next environment\n";
	string fire2 = "\nYou now wield the power of Fire! Fire Attack inherited! Attack damage increased.\n";
	string ice1 = "\nYou have obtained the ice gem! Congratulations, you can now move on to the next environment\n"; 
	string ice2 =  "\nYou now wield the power of ice! Ice Attack inherited! Attack damage increased.\n";
	string earth1 = "\nYou have obtained the earth gem! Congratulations, you can now move on to the next environment\n";
	string earth2 = "\nYou now wield the power of earth! Quake attack inherited! Attack damage increased.\n";
	string rainbow1 = "\nYou have obtained the Rainbow gem! Congratulations, you have obtained all four gems! You can take on the Dragon!\n";
	string rainbow2 = "\nYou now wield the Master Sword! You now have the most powerful weapon known to man! Attack damage at maximum.\n";
};

#endif 