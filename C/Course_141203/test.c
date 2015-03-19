#include <stdio.h>

int main(){
	char str[20] = "123123", *p ; //= "111111"; 

//	p = str; 

	*p = 'a'; 	
	p[1] = 'v'; 

	printf("%s", p); 



	return 0; 	
}
