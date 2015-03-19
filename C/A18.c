#include <stdio.h>
#include <string.h>

int main(){
	char str[255]; 
	int value = 0;
	int i;  
	printf("Entera word: "); 
	scanf("%s", str); 
	for(i=0;str[i]!=0;i++){
		str[i] = toupper(str[i]); 
		switch(str[i]){
			case 'Q':
			case 'Z':
				value += 2; 	
			case 'J':
			case 'X':
				value += 3; 
			case 'K':
				value += 1; 
			case 'F':
			case 'H':
			case 'V':
			case 'W':
			case 'Y':
				value += 1;
			case 'B':
			case 'C':
			case 'M':
			case 'P':
				value += 1; 
			case 'D':
			case 'G':
				value += 1; 
			default:
				value += 1; 
		}	
	}
	printf("Scrabble value: %d\n", value); 
	return 0; 	
}
