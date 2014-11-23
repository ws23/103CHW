#include <stdio.h>

int main(){
	char str[11]; 
	int i, len, zero;
	while(scanf("%s", str)!=EOF){
		for(len=0;str[len];len++)
			; 
		zero = 1; 
		for(i=len-1;i>=0;i--){
			if(zero && str[i]!='0')
				zero = 0; 
			if(!zero)
				putchar(str[i]); 
		}
		putchar('\n'); 
	}
	return 0; 	
}
