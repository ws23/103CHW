#include "Student.h"
//#include <cstring>

Student::Student(std::string namePara, int numClassesPara){
	name = namePara; 
	numClasses = numClassesPara; 
	classList = new std::string[numClasses]; 
	
	for(int i=0;i<numClasses;i++){
		classList[i] = "ClassName" + std::to_string(u); 	
	}	
}

Studemt::~Student(){
	
}

