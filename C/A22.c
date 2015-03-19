#include <stdio.h>

int main(){
	int matrix[5][5], output; 
	int i, j; 
	for(i=0;i<5;i++){
		printf("Enter row %d: ", i+1); 
		for(j=0;j<5;j++)
			scanf("%d", &matrix[i][j]); 
	}

	printf("Row totals:"); 
	for(i=0;i<5;i++){
		output = 0; 
		for(j=0;j<5;j++)
			output += matrix[i][j]; 
		printf(" %d", output); 
	}
	printf("\n"); 

	printf("Column totals:");
	for(j=0;j<5;j++){
		output = 0; 
		for(i=0;i<5;i++)
			output += matrix[i][j]; 
		printf(" %d", output); 
	}
	printf("\n"); 
			
	
	return 0; 	
}
