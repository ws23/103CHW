#include <stdio.h>

int main(){
	int input = -1; 
	while(input < 0 || input > 32764){
		printf("Enter a number between 0 and 32764: "); 
		scanf("%d", &input); 
	}
	printf("In octal, your number is: %05o\n", input); 
	return 0; 		
}
