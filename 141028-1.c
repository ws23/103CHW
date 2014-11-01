#include <stdio.h>
#include <ctype.h>

int main(){
	char str1[100], str2[100]; 
	int value1, value2; 
	int i; 
	scanf("%s %s", str1, str2); 

	value1 = value2 = 0; 
	for(i=0;str1[i]!=0;i++)
		value1 += toupper(str1[i])-'A'+1; 
	for(i=0;str2[i]!=0;i++)
		value2 += toupper(str2[i])-'A'+1; 	

	if(value1>value2)
		printf("%s %d\n", str1, value1); 
	else
		printf("%s %d\n", str2, value2); 
	return 0;	
}
