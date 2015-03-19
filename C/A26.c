#include <stdio.h>

long long fib(long long n){
	if(n==0 || n==1)
		return 1; 
	return fib(n-1)+fib(n-2); 
}

int main(){
	long long n; 
	printf("Enter a number: "); 
	scanf("%lld", &n); 

	printf("fib[%lld] = %lld\n", n, fib(n));
	return 0;	
}
