#include "Student.h"
#include <iostream>

using namespace std; 

void showStudent(const Student&); 

int main(){
	Student ts5("StudentTook5Classes", 5); 
	Student ts2; 
	
	ts2 = ts5; 
	ts2 = ts2; 
	
	showStudent(ts2); 
	cout << "Show student again\n"; 
	showStudent(ts2); 
	

	return 0; 	
}

void showStudent(const Student& sts){
	cout << "Student Name= " << sts.getName() << endl; 
	cout << "Took " << sts.getNumClasses() << " classes" << endl; 
	cout << "Classes are " << sts.getClassList() << endl; 	
}
