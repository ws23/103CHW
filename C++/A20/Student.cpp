#include "Student.h"
#include <iostream>

Student::Student(){
}

Student::Student(const std::string namePara, const int numClassesPara): name(namePara), numClasses(numClassesPara){
	classList = new std::string[numClasses]; 
	
	for(int i=0;i<numClasses;i++)
		classList[i] = "ClassName" + std::to_string(i); 	
		
}

Student::Student(const Student &stu): name(stu.name), numClasses(stu.numClasses){
	classList = new std::string[numClasses]; 

	for(int i=0;i<numClasses;i++)
		classList[i] = stu.classList[i]; 
}

Student::~Student(){
	delete[] classList; 
}

std::string Student::getName() const {
	return name; 	
}

int Student::getNumClasses() const {
	return numClasses; 	
}

std::string Student::getClassList() const {
	std::string str = classList[0]; 
	for(int i=1;i<numClasses;i++){
		str.append(", ");	
		str.append(classList[i]); 
	}

	return str; 	
}

Student& Student::operator = (const Student &stu){
	if(this!=&stu){
		name = stu.name; 
		numClasses = stu.numClasses; 
		classList = new std::string[numClasses]; 

		for(int i=0;i<numClasses;i++)
			classList[i] = stu.classList[i];
	}
	return *this; 
}
