#include <stdio.h>
#include <string.h>

int main(){
	char sentence[1000], *ch, mark; 
	char str[1000][1000]; 
	int i; 

	printf("Enter a sentence: "); 
	gets(sentence); 
	
	mark = 0; 
	for(i=strlen(sentence)-1;i>=0;i--){
		if(sentence[i]=='.' || sentence[i]=='?'){
			mark = sentence[i];
			break;	
		}	
	}

	i = 0; 
	ch = strtok(sentence, " .?"); 
	while(ch!=NULL){
		strcpy(str[i], ch); 	
		ch = strtok(NULL, " .?"); 
		i++; 
	}

	printf("Reversal of sentence: "); 
	for(i--;i>0;i--)
		printf("%s ", str[i]); 
	printf("%s", str[0]);
	printf("%c\n", mark); 
	return 0; 	
}
