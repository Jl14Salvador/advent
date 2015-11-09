#ifndef EXCEPTIONS_H_
#define EXCEPTIONS_H_
#include <iostream>
#include <stdexcept>


class invalid_input : public std::runtime_error {
public: 
	explicit invalid_coordinates_error(const std::string& what_arg) : 
		std::runtime_error(what_arg), message(what_arg) {}
	virtual const char* what() const throw(); 

private: 
	const std::string& message; 
};


class invalid_move_error : public std::runtime_error {
public: 
	explicit invalid_move_error(const std::string& what_arg) : 
		std::runtime_error(what_arg), message(what_arg) {} 

	virtual const char* what() const throw(); 

private: 
	const std::string& message; 		
};

#endif