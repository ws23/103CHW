#include <stdio.h>

int main(){
	int input;
	int tens, units; 

	scanf("%d", &input); 
	tens = input%10; 
	units = input/10; 
	printf("%d%d\n", tens, units); 
	return 0; 
}
