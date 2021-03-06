#include "stack.h"
#include "stackErr.h"
#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(){
	top = 0;
}

bool is_empty(){
	return top == 0;
}

bool is_full(){
	return top == STACK_SIZE;
}

void push(int i){
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

int pop(){
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
	return '\0'; /* prevents compiler warning due to stack_underflow() call */
}
