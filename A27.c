#include <stdio.h>
#include <ctype.h>
#define MAX_DIGITS 10

int main(){
	
	int i, j, len;
	int  num[MAX_DIGITS]; 
	char input[MAX_DIGITS+10]; 
	char digit[10][3][4] = {{" _ ", "| |", "|_|"}, // 0
							{"   ", "  |", "  |"}, // 1
							{" _ ", " _|", "|_ "}, // 2
							{" _ ", " _|", " _|"}, // 3
							{"   ", "|_|", "  |"}, // 4
							{" _ ", "|_ ", " _|"}, // 5
							{" _ ", "|_ ", "|_|"}, // 6
							{" _ ", "| |", "  |"}, // 7
							{" _ ", "|_|", "|_|"}, // 8
							{" _ ", "|_|", " _|"}}; // 9

	gets(input); 
	for(i=0, j=0;input[i];i++){
		if(isdigit(input[i])){
			num[j++] = input[i] - '0'; 
			if(j>=MAX_DIGITS)
				break;	
		}	
	}
	len = j; 

	for(j=0;j<3;j++){
		for(i=0;i<len;i++)
			printf("%s ", digit[num[i]][j]); 
		printf("\n"); 
	}
	return 0; 
}
