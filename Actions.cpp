#include "Actions.h" 
#include <iostream>
void Attack::doAction() {
	std::cout << "Attack happened" << std::endl; 
}

void Talk::doAction() {
	std::cout << "Talk happened" << std::endl;
}

void Open::doAction() {
	std::cout << "Open happened" << std::endl; 
}

void Eat::doAction() {
	std::cout << "Eat happened" << std::endl; 
}


