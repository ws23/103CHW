#include <stdio.h>

int main(){
	int input, largest, smallest; 
	int i; 
	printf("Enter four integers: "); 
	scanf("%d", &input); 
	largest = smallest = input; 
	for(i=1;i<4;i++){
		scanf("%d", &input); 	
		if(largest < input)
			largest = input; 
		if(smallest > input)
			smallest = input; 
	}
	printf("Largest: %d\nSmallest: %d\n", largest, smallest); 
	return 0; 	
}
