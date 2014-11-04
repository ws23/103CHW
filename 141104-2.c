#include <stdio.h>

void honoi(int n, char a, char b, char c){
	if(n==1)
		printf("Move guard %d from %c to %c\n", n, a, c); 	
	else{
		honoi(n-1, a, c, b); 
		printf("Move guard %d from %c to %c\n", n, a, c); 	
		honoi(n-1, b, a, c); 
	}
}

int main(){
	int n; 
	scanf("%d", &n); 
	honoi(n, 'S', 'I', 'G');
	return 0; 	
}
