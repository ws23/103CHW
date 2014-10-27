#include <stdio.h>

int main(){
	double input, largest; 
	printf("Enter a number: "); 
	scanf("%lf", &input); 
	largest = input; 
	while(input > 0){
		printf("Enter a number: "); 
		scanf("%lf", &input); 
		if(largest < input)
			largest = input; 
	}
	printf("\nThe largest number entered was %.2lf\n", largest); 
	return 0; 	
}
