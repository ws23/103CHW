#include <stdio.h>

int stringLen(char str[]){
	/* To calculate the length of the string */
	int i; 

	for(i=0; str[i]; i++)
		;
	return i;
}

char toUpper(char c){
	/* To make the letter to uppercase. 
	   If it isn't alphabet, return it immediatly. */
	if(c>='a' && c<='z')
		return c-'a'+'A';
	return c;  
}

int countLetters(char str[]){
	/* To count the value of alphabets, add all, and return it. 
	   A is 1, B is 2, etc.	*/	
	int i, len, sum, tmp; 
	len = stringLen(str); 
	sum = 0;
	for(i=0;i<len;i++){
		tmp = toUpper(str[i])-'A'+1; 
		if(tmp>=1&&tmp<=26)
			sum += tmp; 
	}
	return sum; 
}

void reverseString(char str[]){
	/* To reverse the string. */
	int i, len = stringLen(str); 
	char rev[100]; 

	for(i=0;i<len;i++)
		rev[i] = str[len-i-1]; 
	for(i=0;i<len;i++)
		str[i] = rev[i]; 
}

int main(){
	char input, str[100]; 
	int i, len; 

	gets(str); 

	len = stringLen(str); 
	printf("len = %d\n", len); 

	for(i=0;i<len;i++)
		printf("%c", toUpper(str[i]));  
	printf("\n"); 

	printf("%d\n", countLetters(str)); 

	reverseString(str); 
	for(i=0;i<len;i++)
		printf("%c", str[i]); 
	printf("\n"); 

	return 0; 	
}
