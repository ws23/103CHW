#include <iostream>
#include <iomanip>
#define ABS(n) (n)<0? -(n): (n)
using namespace std; 

int main(){
	double n, guess, pre, r; 

	while(cin>>n){
		guess = n/2; 
		pre = 0; 
		while(ABS(guess-pre)>0.01*pre){
			r = n/guess; 	
			pre = guess; 
			guess = (guess+r)/2; 
		}
		cout << "sqrt(" << n << ") = " << setprecision(3) << guess << endl; 
	}
	return 0; 	
}
