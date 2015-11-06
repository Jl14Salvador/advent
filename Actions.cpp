#include "Actions.h" 
#include <iostream>
void Attack::doAction(Character* c) {
	std::cout << "Attack happened" << std::endl; 
}

void Talk::doAction(Character* c) {
	std::cout << "Talk happened" << std::endl;
}

void Ignore::doAction(Character* c) {
	std::cout << "Ignore happened" << std::endl; 
}

void Skip::doAction(Character* c) {
	std::cout << "Skip happened" << std::endl; 
}


