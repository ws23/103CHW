#include <stdio.h>
#include <stdlib.h>

int run(int jump, int n){
	int *arr = malloc(sizeof(int)*n); 
	int i, j, arrive, now; 

	for(i=0;i<n;i++)
		arr[i] = 0; 

	arrive = 1; 
	now = 1; 
	arr[0] = 1; 
	while(arrive<n){
		for(j=0;j<jump;j++){
			do{
				now += 1; 
				if(now>n)
					now -= n; 
			}while(arr[now-1]); 
		}
		arr[now-1] = 1; 
		arrive += 1; 
	}
	return now; 
}

int main(){
	int n, i; 

	while(scanf("%d", &n)!=EOF){
		for(i=1;;i++)
			if(run(i, n)==13)
				break;
		printf("%d\n", i); 
	}
	return 0; 	
}
