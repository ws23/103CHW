#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fin("programAssignment01.txt", ifstream::in); 
	char c = fin.get(); 

	while(fin.good()){
		if(c=='c')
			c = 'C'; 
		else if(c=='C')
			c = 'c'; 
		cout << c; 
		c = fin.get(); 	
	}

	return 0; 	
}
