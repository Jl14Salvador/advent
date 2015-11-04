#include "Player.h"

int main() {
	Player j = new Player("Juan", 200);
	j.kill(); 
	cout << j.getHealth();  


	return 0; 

}