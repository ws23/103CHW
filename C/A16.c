#include <stdio.h>

int main(){
	int days, week; 
	int i; 
	 
	printf("Enter number of days in month:"); 
	scanf("%d", &days); 
	do{
		printf("Enter starting day of the week (1=Sun, 7=Sat): "); 
		scanf("%d", &week); 
	}while(week<1 || week>7); 
	printf("\n"); 
	for(i=0;i<week-1;i++)
		printf("%2s ", " "); 
	for(i=1;i<=days;i++){
		if((i-1+week)%7==0 || i==days) 
			printf("%2d\n", i);
		else
			printf("%2d ", i); 	
	}
	return 0; 	
}
