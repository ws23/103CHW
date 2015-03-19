#include <stdio.h>

size_t strlen(const char*); 

int main(){

	char str[1000]; 

	scanf("%999s", str); 

	printf("length of %s is %d\n", str, strlen(str)); 


	return 0; 	
}

size_t strlen(const char *s){
	size_t n; 

	for(n=0; *s!='\0';s++)
		n++; 	
	
	return n; 
}
