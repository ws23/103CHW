#include <stdio.h>

char *strcat(char*, const char*); 

int main(){
	char str1[100] = "123456"; 
	char str2[10] = "abcdef"; 

	strcat(str1, str2); 

	printf("%s\n", str1); 

	return 0; 	
}

char *strcat(char *s1, const char *s2){
	char *p = s1; 
	
	while(*p!='\0')	
		p++; 
	while(*s2!='\0'){
		*p = *s2;
		p++; 
		s2++; 
	}
	*p = '\0'; 
	return s1; 
}
