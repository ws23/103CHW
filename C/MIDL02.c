#include <stdio.h>

int main(){
	int n; 
	double rate, now; 

	while(scanf("%d", &n)!=EOF){
		now = 1; 
		while(n--){
			scanf("%lf", &rate); 
			now *= (1+rate); 
		}	
		printf("%lf\n", now-1); 
	}
	return 0; 	
}
