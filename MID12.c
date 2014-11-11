#include <stdio.h>



int main(){
	char str[3][100] = {}; 
	int sound[3]; 
	int i, j; 

	while(scanf("%s %s %s", str[0], str[1], str[2])!=EOF){
		
		for(i=0;i<3;i++){
			sound[i] = 0; 
			for(j=0;str[i][j];j++){
				switch(str[i][j]){
					case 'N': 
						switch(str[i][j+1]){
							case 'A': 
							case 'I':
							case 'U': 
							case 'E': 
							case 'O': 
								break; 
							default: 
								sound[i]++; 
						}
						break;
					case 'A': 
					case 'I': 
					case 'U': 
					case 'E': 
					case 'O': 
						sound[i]++; 
						break;
					default: 
						; 
				}		
			}
		}
		
		if(sound[0]==5 && sound[1]==7 && sound[2]==5)
			printf("CORRECT\n"); 
		else{
			printf("INCORRECT\n");
			if(sound[0]!=5)
				printf("1 %+d\n", sound[0]-5); 
			if(sound[1]!=7)
				printf("2 %+d\n", sound[1]-7); 
			if(sound[2]!=5)
				printf("3 %+d\n", sound[2]-5); 
		}
	}
	return 0; 	
}
