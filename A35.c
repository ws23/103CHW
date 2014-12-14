#include <stdio.h>
#define NELEMS(a) (sizeof(a)/sizeof(a[0]))

int main(){
	int arr1[123]; 
	char arr2[456]; 
	double arr3[789]; 

	printf("Num of arr1's elements is %d\n", NELEMS(arr1)); 
	printf("Num of arr2's elements is %d\n", NELEMS(arr2)); 
	printf("Num of arr3's elements is %d\n", NELEMS(arr3)); 
	
	return 0; 
}
