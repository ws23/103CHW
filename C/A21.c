#include <stdio.h>
#include <string.h>

int main(){
	int digit[10], input;
	int i; 
	memset(digit, 0, sizeof(digit)); 
	printf("Ennter a number: "); 
	scanf("%d", &input); 
	while(input>0){
		digit[input%10]++; 
		input /= 10; 
	} 
	printf("Repeated digit(s):"); 
	for(i=0;i<10;i++)
		if(digit[i]>1)
			printf(" %d", i); 	
	printf("\n"); 
	return 0; 	
}
