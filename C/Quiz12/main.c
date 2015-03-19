#include <stdio.h>
#include "stack.h"

int main(){
	char ch; 
	int op1, op2; 
	char str[10]; 

	printf("Enter an RPN expression: "); 
	for(;;){
		scanf(" %c", &ch); 
		switch(ch){
			case '0': case '1': case '2': case '3': case '4': 
			case '5': case '6': case '7': case '8': case '9': 
				push(ch - '0'); 
				break;
			case '+': 
				push(pop() + pop()); 
				break;
			case '-': 
				op2 = pop(); 
				op1 = pop(); 
				push(op1 - op2); 
				break;
			case '*':
				push(pop() * pop()); 
				break;
			case '/': 
				op2 = pop(); 
				op1 = pop(); 
				push(op1 / op2); 
				break;
			case '=': 
				printf("Value of expression: %d\n", pop()); 
				make_empty(); 
				printf("Enter an RPN expression: "); 
				break;
			default: 
				return 0; 
		}
	}
}
