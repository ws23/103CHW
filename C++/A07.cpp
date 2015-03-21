#include <iostream>
#include <iomanip>
using namespace std; 

void input(int&, int&); 
void convert(int&, char&); 
void output(const int, const int, const char); 

int main(){
	int hr, min; 
	char noon; 

	while(1){
		input(hr, min); 
		convert(hr, noon); 
		output(hr, min, noon); 
	}
	return 0; 	
}

void input(int &hour, int &minute){
	while(1){
		cout << "Input the time(24-hour notation). " << endl; 
		cout << "Usage: <hour> <minute>" << endl; 
		cin >> hour >> minute; 
		if(hour<0 || hour>23)
			cout << "<hour> need to between 0 and 24. " << endl; 
		if(minute<0 || hour>59)
			cout << "<minute> need to between 0 and 60. " << endl; 
		if(hour>=0 && hour <24 && minute>=0 && minute<60)
			return; 
	}
}

void convert(int &hour, char &formal){
	if(hour>12){
		formal = 'P'; 
		hour -= 12; 	
	}
	else if(hour==0){
		formal = 'A'; 
		hour = 12; 
	}
	else if(hour==12)
		formal = 'P'; 	
	else
		formal = 'A';
}

void output(const int hour, const int minute, const char formal){
	cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << minute << " " << formal << ".M." << endl; 
}
