#ifndef ENVIROS_H
#define ENVIROS_H
#include "Player.h"
class Enviros {
	public: 
		///Constructors and Destructors
		Enviros();
		~Enviros(); 
		virtual void run(Player* player) = 0; 

		///Prints the instructions and options for a battle sequence
		void printInstruction(); 

		///Prints the instructions and options when in the environment
		void printEnviroInstruct();

		///Takes input from the user and ensures its valid, then returns it. 
		char validateData(); 

		///Outputs the number of gems the user has 
		void reportGems(Player* p); 

	private:
		
};
#endif
