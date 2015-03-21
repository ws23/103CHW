#include <iostream>
using namespace std; 

void input(double&, double&); 
void convert(double&, double&, const double, const double); 
void output(const double, const double); 

int main(){
	double inch, foot, cm, m; 
	
	while(1){
		input(foot, inch); 
		convert(m, cm, foot, inch); 
		output(m, cm); 
	}

	return 0; 	
}

void input(double &foot, double &inch){
	cout << "Input the length. Usage: <foot> <inch>" << endl; 
	cin >> foot >> inch; 
}

void convert(double &meter, double &centimeter, const double foot, const double inch){
	double inches = foot*12 + inch; 
	centimeter = inches*30.48; 
	meter = int(centimeter / 100); 
	centimeter -= meter*100; 
}
void output(const double meter, const double centimeter){
	cout << meter << " m "	<< centimeter << " cm. " << endl; 
}
