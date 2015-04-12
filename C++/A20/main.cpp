#include "Student.h"
#include <iostream>

using namespace std; 

int main(){
	Student ts5("StudentTook5Classes", 5); 
	Student ts2; 
	
	ts2 = ts5; 
	ts2 = ts2; 
	
	showStudent(ts2); 
	cout << "Show student again\n"; 
	showStudent(ts2); 
	
	return true; 	
}

void showStudent(const Student& sts){
	cout << "Student Name= " << sts.getName() << endl; 
	cout << "Took " << sts.getClasses << "classes" << endl; 
	cout << "Classes are " << sts.classList() << endl; 	
}
