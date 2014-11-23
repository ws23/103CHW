#include <stdio.h>

int main(){
	char month[12][20] = {
		"January", "February", "March", "April", 
		"May", "June", "July", "August", 
		"September", "October", "November", "December"
	}; 
	char day[31][50] = {
		"first", "second", "third", "fourth", "fifth", 
		"sixth", "seventh", "eighth", "ninth", "tenth", 
		"eleventh", "twelfth", "thirteenth", "fourteenth", "fifteenth", 
		"sixteenth", "seventeenth", "eighteenth", "nineteenth", "twentieth", 
		"twenty-first", "twenty-second", "twenty-third", "twenty-fouth", "twenty-fifth", 
		"twenty-sixth", "twenty-seventh", "twenty-eighth", "twenty-ninth", "thirtieth", 
		"thirty-first"
	}; 
	int m, d; 

	while(scanf("%d/%d", &m, &d)!=EOF)
		printf("%s %s\n", month[m-1], day[d-1]); 

	return 0; 	
}
