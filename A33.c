#include <stdio.h>

int main(int argc, char *argv[]){
	int i = argc-1;
	printf("%s", argv[i]); 
	while(--i)
		printf(" %s", argv[i]); 
	printf("\n"); 
	return 0; 	
}
