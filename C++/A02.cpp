#include <iostream>
using namespace std; 

int main(){
	int input, tmp, sum; 
	while(cin>>input){
		tmp = input; 
		sum = 0; 
		while(tmp!=0){
			sum	+= tmp%10; 
			tmp /= 10; 
		}	
		cout << "Sum of each digits of " << input << " is " << sum << ". " << endl;  
	}

	return 0; 	
}
