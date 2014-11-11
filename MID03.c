#include <stdio.h>

int main(){
	int input, min, max, i; 
	while(scanf("%d", &input)!=EOF){
		min = max = input; 
		for(i=0;i<3;i++){
			min = input<min? input: min; 
			max = input>max? input: max; 	
		}
		printf("%d %d\n", min, max); 
	}
	return 0; 	
}
