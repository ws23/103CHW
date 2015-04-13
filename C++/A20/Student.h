#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
	public: 
		Student(); 
		Student(const std::string, const int); 
		Student(const Student&); 
		~Student(); 
	
		std::string getName() const ; 
		int getNumClasses() const ; 
		std::string getClassList() const ; 

		Student& operator = (const Student&); 
		 	
	private: 
		std::string name; 	// A string that stores the name of the student
		int numClasses; 	// A integer that tracks how many courses the student is currently enrolled in
		std::string *classList; // A dynamic array of strings used to store the names of the classes that the student is enrolled in	
}; 

#endif
