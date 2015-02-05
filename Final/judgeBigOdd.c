#include <stdio.h>
#include <string.h>

int main(){
	char in[102]; 
	while(scanf("%s", in)!=EOF)
		printf("%s\n", (in[strlen(in)-1]-'0')%2==0? "no":"yes"); 
	return 0; 
}
