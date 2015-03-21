#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main(){
	int pick, selected = 0; 

	srand(time(NULL)); 

	for(int i=0;i<4;i++){
		pick = rand()%25 + 1; 
		if((1<<(pick-1))&selected)
			i--; 
		else{
			cout << pick << endl; 
			selected += (1<<(pick-1)); 
		}
	}

	return 0; 
}

