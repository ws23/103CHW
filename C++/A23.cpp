#include <iostream>
using namespace std; 

int pins (int n) {
	if(n==1)
		return 1;
	return pins(n-1) + n; 	
}

int main(){
	int i; 
	for(i=1;i<=100;i++)
		cout << i << " rows has " << pins(i) << " pins. " << endl; 

	return 0; 	
}
