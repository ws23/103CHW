#include <iostream>
using namespace std; 

int multi(int n){
	if(n==1)
		return 1; 
	return multi(n-1)*n; 	
}

int c(int n, int r) {
	return multi(n)/(multi(r)*multi(n-r)); 
}

int main() {
	int n, r; 
	n = 5; 
	r = 2; 
	
	cout << "C( " << n << ", " << r << ") = " << c(n, r) << endl; 

	return 0; 	
}
