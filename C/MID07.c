#include <stdio.h>

int main(){
	int days, week; 
	int i; 

	while(scanf("%d %d", &days, &week)!=EOF){ 
		for(i=0;i<week-1;i++)
			printf("   "); 
		for(i=1;i<days;i++){
			printf("%3d", i);
			if((i-1+week)%7==0)
				printf("\n"); 
		}
		printf("%3d\n", i); 
	}
	return 0; 	
}
