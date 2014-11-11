#include <stdio.h>

int main(){
	int n; 
	while(scanf("%d", &n)!=EOF)
		printf("%d%d\n", n%10, n/10); 
	return 0; 	
}
