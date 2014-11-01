#include <stdio.h>

void selection_sort(int arr[], int n){
	int i, index_min, tmp; 
	
	if(n==0)
		return; 
	
	index_min = 0; 
	for(i=1;i<n;i++)
		if(arr[i]<arr[index_min])
			index_min = i; 
	tmp = arr[n-1]; 
	arr[n-1] = arr[index_min]; 
	arr[index_min] = tmp; 

	return selection_sort(arr, n-1); 
}

int main(){
	int arr[1000], i, n;
	
	printf("Enter the number of elements: "); 
	scanf("%d", &n); 

	printf("Enter %d integers: ", n); 
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]); 
	
	selection_sort(arr, n); 

	for(i=0;i<n;i++)
		printf("%d ", arr[i]); 
	printf("\n"); 

	return 0; 	
}
