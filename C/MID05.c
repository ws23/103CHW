#include <stdio.h>

int main(){
	int n, a, b, c, day; 
	int i; 

	while(scanf("%d %d %d %d", &n, &a, &b, &c)!=EOF){
		day = 0; 
		for(i=1;i<=n;i++){
			if(i%7==6 || i%7==0)
				continue; 
			if(i%a==0)
				day++; 
			else if(i%b==0)
				day++; 
			else if(i%c==0)
				day++; 
		}
		printf("%d\n", day); 
	}
	return 0; 	
}
