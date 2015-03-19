#include <stdio.h>

int main(){
	int input; 
	int a, b, c, d, e; 
	printf("Enter a number between 0 and 32767: "); 
	scanf("%d", &input); 
	a = input % 8; 
	input = input / 8; 
	b = input % 8; 
	input = input / 8; 
	c = input % 8; 
	input = input / 8; 
	d = input % 8; 
	input = input / 8; 
	e = input % 8; 
	printf("In octal, your number is: %d%d%d%d%d\n", e, d, c, b, a); 
	return 0; 	
}
	
