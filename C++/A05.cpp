#include <iostream>
#include <cmath>
#include <vector>
using namespace std; 

int main(){
	double input, sum, avg, n, tmp, delta; 
	vector<double> score; 
	
	sum = n = 0; 
	while(cin>>input){
		if(cin.eof())			
			break;
		score.push_back(input); 
		n++; 
		sum += input; 
	}
	avg = sum/n; 
	
	for(vector<double>::iterator i=score.begin(); i!=score.end(); i++)
		tmp += (*i-avg) * (*i-avg); 
	delta = sqrt(tmp/n); 

	cout << "Average: " << avg << endl; 
	cout << "Standard deviation: " << delta << endl; 
	
	return 0; 	
}
