#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define GUESS_TIMES 10

int main(){
	int a, b, i, j, count; 
	char ans[5], guess[5], used[10] = {0}; 
	srand(time(NULL)); 
	for(i=0;i<4;i++){
		a = rand()%10; 
		if(used[a])
			i--; 
		else{
			ans[i] = a + '0'; 
			used[a] = 1; 
		}
	}
	guess[4] = ans[4] = 0; 

	count = GUESS_TIMES; 
	while(count--){
		printf("Guess: "); 
		scanf(" %c%c%c%c", &guess[0], &guess[1], &guess[2], &guess[3]); 

		a = b = 0; 
		for(i=0;i<4;i++)
			if(ans[i]==guess[i])
				a++; 
		for(i=0;i<4;i++)
			for(j=0;j<4;j++)
				if(ans[i]==guess[j])
					b++; 
		b -= a; 
		
		printf("You get %dA%dB\n", a, b); 
		if(a==4)
			break;
	}
	if(a!=4)
		printf("You Loss!!\nThe answer is %s\n", ans); 
	else
		printf("You Win!!\n"); 
	return 0; 	
}
