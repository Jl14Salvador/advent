#include "Exceptions.h"


const char* invalid_input::what() const throw() {
	return "Please enter valid input. \n"; 
}

const char* invalid_move_error::what() const throw() {
	return "This move is invalid, please enter a valid move. \n"; 
}



