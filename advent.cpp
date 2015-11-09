#include "LandofTorvold.h"
#include "Village.h"
int main() {
	cout << "Welcome to the Land of Torvold\n" << endl;
	LandofTorvold* L = new LandofTorvold(); 
	L->run(); 

	delete L; 

	return 0; 
}
	
