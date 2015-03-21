#include <iostream>
#include <string>
using namespace std; 

class Pizza{
	private: 
		string type; 
		string size; 
		int topping; 
	public:
		Pizza(); 
		Pizza(string, string, int); 
		~Pizza(); 
		void setType(string);
		void setSize(string); 
		void setNumOfTopping(int); 
		string getType(); 
		string getSize(); 
		int getNumOfTopping(); 
		void outputDescription(); 
		double computePrice();  
}; 

int main(){	
	Pizza p1("Pizza 1", "Small", 4), p2, *p3 = new Pizza("Pizza 3", "Large", 23);

	p2.setType("Pizza 2"); 
	p2.setSize("Medium"); 
	p2.setNumOfTopping(12); 

	p1.outputDescription(); 
	p2.outputDescription(); 
	p3->outputDescription(); 

	return 0; 
}

/* Member function of class "Pizza" */

Pizza::Pizza(){}

Pizza::Pizza(string type, string size, int num) : 
	type(type), size(size), topping(num) {}

Pizza::~Pizza() {}

void Pizza::setType(string input){
	type = input; 
}

void Pizza::setSize(string input){
	size = input; 	
}

void Pizza::setNumOfTopping(int input){
	topping = input; 	
}

string Pizza::getType(){
	return type; 	
}

string Pizza::getSize(){
	return size; 	
}

int Pizza::getNumOfTopping(){
	return topping; 	
}

void Pizza::outputDescription(){
	cout << "Type: " << type << endl; 
	cout << "Size: " << size << endl; 
	cout << "Num of topping: " << topping << endl; 
	cout << "Price: " << computePrice() << endl; 
}

double Pizza::computePrice(){
	double price; 
	if(size=="Small")
		price = 10; 
	else if(size=="Medium")
		price = 14; 
	else if(size=="Large")
		price = 17; 
	else
		price = 0; 
	
	return price? price+2*topping : -1; 
}
/* Member function of class "Pizza" */
