#include "Questions.h"
#include <iostream>

bool Questions::question1() {
	std::cout << "\nWhat is the square root of 25?"; 
	int answer = 0;
	std::cin >> answer; 
	if (answer == 5)
		return true; 
	else 
		return false; 
}

bool Questions::question2() {
	std::cout << "\n What is the capital of Canada?";
	std::string answer; 
	std::cin >> answer; 
	if (answer == "Ottawa")
		return true; 
	else 
		return false; 
}

bool Questions::question3() {
	std::cout << "\n What is the square root of 5^3 / 25 + 5 * 10";
	std::string answer; 
	std::cin >> answer; 
	if (answer == "10")
		return true; 
	else 
		return false; 
}

bool Questions::question4() {
	std::cout << "\n How many times does the minute hand and the hour hand meet in 24 hours?" ;
	std::string answer; 
	std::cin >> answer; 
	if (answer == "22")
		return true; 
	else 
		return false; 
}

bool Questions::question5() {
	std::cout << "Suppose you're on a game show, and you're given the choice of three doors: Behind one door is a car; behind the others, goats. You pick a door, say No. 1, and the host, who knows what's behind the doors, opens another door, say No. 3, which has a goat. He then says to you, 'Do you want to pick door No. 2?'' Is it to your advantage to switch your choice? Yes or no?";
	std::string answer; 
	std::cin >> answer; 
	if (answer == "yes"|| answer == "y" || answer == "Yes")
		return true;
	else 
		return false; 
}