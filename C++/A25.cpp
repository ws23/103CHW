#include <iostream>
using namespace std; 

int f(int n) {
	if(n==0 || n==1)
		return 1; 
	return f(n-1) + f(n-2); 
}

int main(){
	int i; 
	for(i=0;i<=40;i++)
		cout << "F(" << i << ") = " << f(i) << endl; 	
	return 0; 	
}
