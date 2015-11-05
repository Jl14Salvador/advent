#include "Items.h"
#include <iostream>

void Key::useItem() {
	std::cout << "Key has been used" << std::endl; 
}

void Scroll::useItem() {
	std::cout << "Scroll has been used" << std::endl; 
}

void Potion::useItem() {
	std::cout << "Potion has been used" << std::endl; 
}