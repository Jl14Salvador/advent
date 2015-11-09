#ifndef ENVIROS_H
#define ENVIROS_H
#include "Player.h"
class Enviros {
	public: 
		Enviros();
		~Enviros(); 
		virtual void run(Player* player) = 0; 
		void printInstruction(); 
		void printEnviroInstruct();
	private:
		
};
#endif
