#include <stdio.h>

int gcd(int, int); 

int main(){
	int num1, num2; 
	printf("Enter two integers: "); 
	scanf("%d %d", &num1, &num2); 
	printf("Greatest common divisor: %d\n", gcd(num1, num2)); 
	return 0; 	
}

int gcd(int a, int b){
	while((a%=b) && (b%=a))
		; 
	return a+b; 
}
