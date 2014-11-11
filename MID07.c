#include <stdio.h>

int main(){
	int days, week; 
	int i; 

	while(scanf("%d %d", &days, &week)!=EOF){ 
		for(i=0;i<week-1;i++)
			printf("%2s ", " "); 
		for(i=1;i<days;i++){
			if((i-1+week)%7==0)
				printf("%2d\n", i);
			else
				printf("%2d ", i); 	
		}
		printf("%2d", days); 
		if((days-1+week)%7)
			printf("\n"); 
	}
	return 0; 	
}
