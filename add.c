#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i, j, k;
	int test[100000];  
	srand(time(NULL));
	memset(test, 0, sizeof(test)); 
	printf("1\n100000 10000\n"); 
	for(i=0;i<10000;i++){
		j = rand()%100000; 
		if(test[j]==1)
			i--; 
		if(i==49999)
			printf("%d\n", j); 
		printf("%d ", j);
		test[j] = 1; 
	}
	return 0; 	
}
