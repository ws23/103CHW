#include <stdio.h>
#define MAX 10

void selection_sort(int arr[], int n){
	int i, index_max, tmp; 
	
	if(n==0)
		return; 
	
	index_max = 0; 
	for(i=1;i<n;i++)
		if(arr[i]>arr[index_max])
			index_max = i; 
	tmp = arr[n-1]; 
	arr[n-1] = arr[index_max]; 
	arr[index_max] = tmp; 

	return selection_sort(arr, n-1); 
}

int main(){
	int arr[MAX], i;
	
	printf("Enter %d integers\n", MAX); 
	for(i=0;i<MAX;i++)
		scanf("%d", &arr[i]); 
	
	selection_sort(arr, MAX); 

	for(i=0;i<MAX;i++)
		printf("%d ", arr[i]); 
	printf("\n"); 

	return 0; 	
}
