#include <stdio.h>
#include <ctype.h>

int main(){
	char word1[1000], word2[1000];
	int letters1[26], letters2[26], i, isAnagrams;

	printf("Enter first word: "); 
	gets(word1); 
	printf("Enter second word: "); 
	gets(word2); 

	for(i=0;i<26;i++){
		letters1[i] = letters2[i] = 0; 	
	}

	for(i=0;word1[i]!=0;i++){
		if(!isalpha(word1[i]))
			continue; 
		word1[i] = tolower(word1[i]); 
		letters1[word1[i]-'a']++; 		
	}

	for(i=0;word2[i]!=0;i++){
		if(!isalpha(word2[i]))
			continue; 
		word2[i] = tolower(word2[i]); 
		letters2[word2[i]-'a']++; 	
	}
	
	isAnagrams = 1; 
	for(i=0;i<26;i++){
		if(letters1[i]!=letters2[i]){
			isAnagrams = 0; 
			break;	
		}
	}

	if(isAnagrams)
		printf("The words are anagrams. \n"); 
	else
		printf("The words are not anagrams. \n"); 

	return 0; 	
}
