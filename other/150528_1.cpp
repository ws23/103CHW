#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main(){
	fstream fs("output.txt", fstream::out); 
	if(fs.is_open()){
		srand(time(NULL)); 
		for(int i=0;i<10;i++)
			fs << rand() << endl;
		fs.close();  
	}
	else
		cout << "File open error. " << endl; 
	return 0; 	
}
