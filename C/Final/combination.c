#include <stdio.h>

int main(){
	int t, n, k;
	int primeTable[25]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	int ans[25]={}; 
	int last, i, j, tmp; 

	while(scanf("%d", &t)){
		while(t--){
			scanf("%d %d", &n, &k); 

			if(k>(n-k))
				k = n-k; 

			last = 0; 
			for(i=n-k+1;i<=n;i++){
				tmp = i; 
				for(j=0;j<25;j++){
					while(tmp%primeTable[j]==0){
						ans[j]++; 
						tmp /= primeTable[j]; 
						if(j>last)
							last = j; 	
					}
				}	
			}

			for(i=2;i<=k;i++){
				tmp = i; 
				for(j=0;j<25;j++){
					while(tmp%primeTable[j]==0){
						ans[j]--; 
						tmp /= primeTable[j]; 
					}
				}
			}

			for(i=0;i<last;i++){
				printf("%d,", ans[i]); 
				ans[i] = 0; 
			}
			printf("%d\n", ans[last]); 
			ans[last] = 0; 
		}
	}
	return 0; 	
}
