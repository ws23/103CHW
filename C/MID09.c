#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getPrime(int *p, int n){
	int i, j, count = 0;
	char *notPrime = malloc(sizeof(char)*n); 
	
	memset(notPrime, 0, sizeof(notPrime)); 
	for(i=2;i<n;i++){
		if(!notPrime[i]){
			p[count++] = i; 
			for(j=i*2;j<n;j+=i)
				notPrime[j] = 1; 
		}
	}
	return count; 
}

int main(){
	int num, n, i, tmp, prime[10000]; 
	num = getPrime(prime, 10000); 
	while(scanf("%d", &n)!=EOF){
		for(i=0;i<num && prime[i]<=n;i++){
			tmp = 0;
			while(!(n%prime[i])){
				tmp++; 
				n /= prime[i]; 
			}
			if(tmp)
				printf("(%d^%d)", prime[i], tmp); 
		}
		if(n>1)
			printf("(%d^1)\n", n);
		else
			printf("\n");  
	}
	return 0; 	
}
