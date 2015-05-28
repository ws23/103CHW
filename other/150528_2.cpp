#include <iostream>
#include <fstream>
#include <algorithm>
#define FILENAME "output.txt"
using namespace std; 

int main(){
	fstream fs(FILENAME, fstream::in);
	int arr[10]; 
	if(fs.is_open()) {
		for(int i=0;i<10;i++)	
			fs >> arr[i]; 
		fs.close(); 
	}
	else
		cout << "File open error. (in)"; 
	sort(arr, arr+10); 
	fs.open(FILENAME, fstream::out | fstream::trunc); 
	if(fs.is_open()){
		for(int i=0;i<10;i++)
			fs << arr[i] << endl;
		fs.close();  	
	}
	else
		cout << "File open error. (out)"; 

	return 0; 	
}
