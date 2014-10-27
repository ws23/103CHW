#include <stdio.h>

int main(){
	int n, i, j, choose; 
	scanf("%d", &n); 
	scanf("%d", &choose); 
	while(choose>=1 && choose<=4){
		if(choose==1){ // right triangle
			for(i=1;i<=n;i++){ 
				for(j=1;j<=i;j++) 
					printf("%c", 'A'+j-1); 
				printf("\n"); 	
			}
		}
		else if(choose==2){ // equilateral triangle
			for(i=1;i<=n;i++){
				for(j=1;j<=n-i;j++)  
					printf(" "); 
				for(j=1;j<i;j++)
					printf("%c ", 'A'+j-1);	
				printf("%c\n", 'A'+i-1); 
			}	
		}
		else if(choose==3){ // inverse equilateral triangle
			for(i=n;i>=1;i--){
				for(j=1;j<=n-i;j++) 
					printf(" "); 
				for(j=1;j<i;j++)
					printf("%c ", 'A'+j-1);
				printf("%c\n", 'A'+i-1); 
			}
		}
		else if(choose==4){ // diamond
			for(i=1;i<=n;i++){
				for(j=1;j<=n-i;j++)
					printf(" "); 
				for(j=1;j<i;j++)
					printf("%c ", 'A'+j-1); 
				printf("%c\n", 'A'+i-1); 
			}
			for(i=n-1;i>=1;i--){
				for(j=1;j<=n-i;j++)
					printf(" ")	; 
				for(j=1;j<i;j++)
					printf("%c ", 'A'+j-1); 
				printf("%c\n", 'A'+i-1); 
			}
		}
		scanf("%d", &choose); 	
	}
	return 0; 	
}
