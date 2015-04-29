#include <iostream>
#include <fstream>
using namespace std; 

int main(int argc, char *argv[]) {
	fstream fin, fout; 
	char buff[100]; 

	if(argc!=3){
		cout << "Usage: " << argv[0] << " <source file> <destination file>" << endl; 	
		return 0; 
	}

	fin.open(argv[1], fstream::in | fstream::binary | fstream::app); 
	fout.open(argv[2], fstream::out | fstream::binary | fstream::app); 

	while(fin.read(buff, 100)){
		fout.write(buff, 100); 	
	}
	fin.close(); 
	fout.close(); 
	return 0; 
}
