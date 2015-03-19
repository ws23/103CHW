#include <stdio.h>
#include <string.h>

int main(){
	char str[21], smallest_word[21], largest_word[21]; 
	printf("Enter word: "); 
	scanf("%s", str); 
	strcpy(smallest_word, str); 
	strcpy(largest_word, str); 	
	while(strlen(str)!=4){
		printf("Enter word: "); 
		scanf("%s", str); 
		strcpy(smallest_word, strcmp(str, smallest_word)==-1? str:smallest_word); 
		strcpy(largest_word, strcmp(str, largest_word)==1? str:largest_word);
	}
	printf("Smallest word: %s\nLargest word: %s\n", smallest_word, largest_word); 
	return 0; 
}
