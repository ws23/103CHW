#include <stdio.h>

int main(){
	int num[10]; 
	int i, j, tmp; 

	for(i=0;i<10;i++)
		scanf("%d", &num[i]); 
	
	for(i=0;i<10;i++){
		for(j=0;j<10-i;j++){
			if(num[j]>num[j+1]){
				tmp = num[j]; 
				num[j] = num[j+1]; 
				num[j+1] = tmp; 	
			}	
		}
	}

	for(i=0;i<9;i++)
		printf("%d ", num[i]); 
	printf("%d\n", num[9]); 
	for(i=9;i>0;i--)
		printf("%d ", num[i]);
	printf("%d\n", num[0]);
	return 0; 	
}
