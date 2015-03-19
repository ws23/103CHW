#include <stdio.h>

int main(){
	char str[1000], input; 
	int len, i, j, space; 

	printf("Enter a sentence: "); 
	len = 0; 
	do{
		input = getchar(); 
		str[len] = input; 
		len++; 
	}while(input!='.' && input!='?' && input!='!' && input!='\n'); 

	printf("Reversal of sentence: "); 
	space = len-1; 
	for(i=len-1;i>0;i--){
		if(str[i]==' ' ){
			for(j=i+1;j<space;j++)
				putchar(str[j]); 
			putchar(' ');
			space = i;  
		}
	}
	for(j=0;j<space;j++)
		putchar(str[j]); 
	putchar(input); 
	
	return 0; 	
}
