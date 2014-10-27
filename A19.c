#include <stdio.h>
#include <string.h>

int main(){
	char str[255]; 
	int words, length; 
	double avg; 
	int i; 
	words = length = 0; 
	printf("Enter a sentence: "); 
	gets(str);
	if(isalpha(str[0]))
		length++;  
	for(i=1;str[i]!=0;i++){
		if(str[i]==' ' && str[i-1]!=' ')
			words++;
		else if(isalpha(str[i]))
			length++; 
	}
	if(str[i-1]!=' ')
		words++; 
	avg = (double)length/words; 
	printf("Average word length: %.1lf\n", avg); 

	return 0; 
}
