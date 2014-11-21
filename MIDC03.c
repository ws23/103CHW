#include <stdio.h>

void revStr(char *str){
	char s[1000]; 
	int i, len; 

	// count string length
	for(i=0;str[i];i++)
		; 	
	len = i; 

	// reverse the string & store in s
	for(i=0;i<len;i++)
		s[i] = str[len-1-i]; 

	// store the reversed string in str
	for(i=0;i<len;i++)
		str[i] = s[i]; 
}

void catStr(char *dest, char *a, char *b){
	int i, j;  
	for(i=0;a[i];i++)
		dest[i] = a[i]; 
	
	for(j=0;b[j];j++)
		dest[i+j] = b[j]; 
}


int main(){
	char s1[1000], s2[1000], ans[2000]; 

	while(scanf("%s %s", s1, s2)!=EOF){
		revStr(s2); 
		catStr(ans, s1, s2); 
		printf("%s\n", ans); 
	}
	return 0; 
}
