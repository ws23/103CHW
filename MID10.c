#include <stdio.h>

int add(int a[], int b[], int c[], int nA, int nB){
	int i, len; 
	
	len = nA>nB? nA:nB; 

	for(i=0;i<len;i++){
		c[i] += a[i] + b[i]; 
		if(c[i]>9){
			c[i] -= 10; 
			c[i+1]++; 	
		}
	}
	return c[len]? len+1 : len; 
}

int main(){	
	int n, i;  
	int fib[1001][210] = {}, len[1001]; 

	fib[0][0] = 0; 
	fib[1][0] = 1; 
	len[0] = len[1] = 1; 
	for(i=2;i<=1000;i++)
		len[i] = add(fib[i-1], fib[i-2], fib[i], len[i-1], len[i-2]); 

	while(scanf("%d", &n)!=EOF){
		for(i=len[n]-1;i>=0;i--)
			printf("%d", fib[n][i]); 
		printf("\n"); 
	}
	return 0; 	
}
