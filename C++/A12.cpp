#include <iostream>
using namespace std; 

class Fraction{
	private: 
		int numerator, denominator; 
		int gcd(int, int); 
	public: 
		Fraction(); 
		Fraction(int, int); 
		~Fraction(); 
		void setNumerator(int); 
		void setDenominator(int); 
		double getValue(); 
		int getNumerator(); 
		int getDenominator();
		void display();  
		Fraction toLowest(); 
}; 

int main(){
	Fraction *num = new Fraction(20, 60); 

	cout << "Num = " << num->getNumerator() << "/" << num->getDenominator() << endl; 
	cout << "The value of num is " << num->getValue() << endl; 
	cout << "The fraction is " << num->toLowest().getNumerator() << "/" << num->toLowest().getDenominator() << endl; 
	num->setNumerator(100); 
	num->setDenominator(200); 

	cout << endl; 

	cout << "Num = "; 
	num->display(); 
	cout << endl; 
	cout << "The value of num is " << num->getValue() << endl; 
	cout << "The fraction is "; 
	num->toLowest().display(); 
	cout << endl; 

	delete num; 	
	return 0; 	
}


/* Member function of class "Fraction" */

Fraction::Fraction() : 
	numerator(1), denominator(1) {}

Fraction::Fraction(int n, int d) : 
	numerator(n), denominator(d) {}

Fraction::~Fraction() {}

int Fraction::gcd(int a, int b){
	while((a%=b)&&(b%=a))
		; 
	return a+b; 
}

void Fraction::setNumerator(int input){	
	numerator = input; 
}

void Fraction::setDenominator(int input){
	denominator = input; 
}

double Fraction::getValue(){
	return (double)numerator/denominator; 
}

int Fraction::getNumerator(){
	return numerator; 	
}

int Fraction::getDenominator(){
	return denominator; 	
}

void Fraction::display(){
	cout << numerator << "/" << denominator; 	
}

Fraction Fraction::toLowest(){
	Fraction tmp; 
	int num = gcd(numerator, denominator); 

	tmp.setNumerator(numerator/num); 
	tmp.setDenominator(denominator/num); 

	return tmp; 
}

/* Member function of class "Fraction" */
