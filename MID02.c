#include <stdio.h>

int main(){
	int n; 
	while(scanf("%d", &n)!=EOF)
		printf("%s\n", n%2? "yes":"no"); 
	return 0; 	
}
