#include <iostream> 
using namespace std; 

struct VillageText {
	string welcomeMsg = "\nYou have entered the Village\n";
	string exitMsg = "You are now leaving the Village.\n"; 
	string story1 = "There's nobdy in sight. The Village is abandoned. You walk around the houses, searching for the first gem.\n";
	string story2 = "It is very quiet. Too quiet...\n"; 
	string gemMsg = "\nYou have obtained the fire gem! Congratulations, you can now move on to the next environment\n";
	string gemMsg2 = "\nYou now wield the power of Fire! Fire Attack inherited! Attack damage increased.\n";
	string enemyMsg = "Dijistra a swordsman has appeared. He is a competent foe. \n"; 
};

struct ForestText {
	string welcomeMsg = "\nYou have entered the Forest";
	string exitMsg = "You are now leaving the Forest.\n"; 
	string story1 = "The forest is full of dense trees and has an eerie feel to it.\n";
	string story2 = "You see the remains of a fallen hero, holding a note, it reads 'Go Back, DANGER LIES AHEAD!'\n";
	string emMsg = "\nYou have obtained the ice gem! Congratulations, you can now move on to the next environment\n"; 
	string gemMsg2 = "\nYou now wield the power of ice! Ice Attack inherited! Attack damage increased.\n";
	string enemyMsg =  "Magnus, a sorcerer from the Ancient Mountains of Rai has approached you.\n"; 
};


struct CaveText {
	string welcomeMsg = "\nYou have entered the Cave";
	string exitMsg = "You are now leaving the Cave.\n"; 
	string story1 = "You hear bats in the distance, mosquitos buzzing, and water dripping from afar.\n";  
	string story2 = "This cave feels cold and lifeless... \n"; 
	string gemMsg = "\nYou have obtained the earth gem! Congratulations, you can now move on to the next environment\n";
	string gemMsg2 = "\nYou now wield the power of earth! Quake attack inherited! Attack damage increased.\n";
	string enemyMsg = "Berners, a beast of great strength is lurking, he draws near. A dead carcus lies beside him.\n";

};

struct CastleText {
	string welcomeMsg = "\nYou have entered the Castle";
	string exitMsg = "You are now leaving the Castle.\n"; 
	string story1 = "The castle is massive. It is the largest building you have ever seen.\n"; 
	string story2 = "Its bricks stretch across the vast Mountain range, this where the final gem lies.\n";
	string gemMsg = "\nYou have obtained the Rainbow gem! Congratulations, you have obtained all four gems! You can now fight the Dragon!\n";
	string gemMsg2 = "\nYou now wield the Master Sword! You now have the most powerful weapon known to man! Attack damage at maximum.\n";
	string enemyMsg = "This is the home of King Ledorf, the strongest human being in all of Torvold.\n";
};

