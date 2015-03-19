#include <stdio.h>
#include <stdlib.h>

int* cmp(int *a, int *b){
	if(*a>*b)
		return 1; 
	if(*a<*b)
		return -1; 
	return 0; 	
}

int main(){
	int n, arr[3000], i, pre, now;
	
	while(scanf("%d", &n)!=EOF){
		scanf("%d", &pre); 
		for(i=1;i<n;i++){
			scanf("%d", &now);
			arr[i-1] = now-pre>0? now-pre: pre-now; 
			pre = now; 
		}

		qsort(arr, n-1, sizeof(int), cmp); 

		if(arr[0]!=1 || arr[n-2]!=n-1)
			printf("Not jolly\n"); 
		else{
			for(i=1;i<n-1;i++){
				if(arr[i]!=i+1){
					printf("Not jolly\n"); 
					break;
				}	
			}	
			if(i==n-1)
				printf("Jolly\n"); 
		}
	} 
	return 0; 	
}
