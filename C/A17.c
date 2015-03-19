#include <stdio.h>

int main(){
	int n;
	double e, k, v; 
	int i, j; 
	printf("Enter an integer: "); 
	scanf("%d", &n); 
	e = 1; 
	k = 1; 
	for(i=1;i<=n;i++){
		k *= i; 
		e += 1/k; 
	}
	printf("Approximates e is %lf. \n", e); 
	return 0; 	
}
