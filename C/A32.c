#include <stdio.h>

int main(int argc, char *argv[]){
	int i, sum; 
	for(i=1, sum=0;i<argc;i++)
		sum += atoi(argv[i]); 
	printf("Total: %d\n", sum); 
	return 0; 	
}
