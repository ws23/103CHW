#include <stdio.h>

int main(){
	int num1, num2; 
	int gcd; 
	printf("Enter two integers: "); 
	scanf("%d %d", &num1, &num2); 
	while(num1!=0 && num2!=0){
		if(num1>num2)
			num1 = num1 % num2; 
		else
			num2 = num2 % num1; 
	}
	gcd = num1 + num2; 
	printf("Greatest common divisor: %d\n", gcd); 
	return 0; 	
}

