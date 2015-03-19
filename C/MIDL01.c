#include <stdio.h>

int main(){
	int a, b, f, n; 
	int i; 

	while(scanf("%d", &n)!=EOF){
		if(n==0)
			printf("0\n"); 
		else if(n==1)
			printf("1\n"); 
		else{
			a = 1; 
			b = 0; 
			for(i=2;i<=n;i++){
				f = a+b; 
				b = a; 
				a = f;  
			}
			printf("%d\n", f); 
		}
	}
	return 0; 	
}
