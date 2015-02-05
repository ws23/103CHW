#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
	char color;  
	/* 	Y: Yellow, G: Green, B: Blue, R: Red, P: Purple
		O: Orange, W: White, C: Cyan, M: Magenta	*/
	struct _node *next; 
} node; 

node* create(char color){
	node *ptr = malloc(sizeof(node)); 
	ptr->color = color; 
	ptr->next = NULL; 
	return ptr; 
}

node* createList(int n){
	node *ptr = create('@'), *head; 
	char color;
	 
	head = ptr;
	while(n--){
		scanf(" %c ", &color); 
		ptr->next = create(color);
		ptr = ptr->next; 
	}
	return head; 
}

node* searchInsertPoint(int n, char color, node *head){
	int count = 0; 
	node *ptr; 
	ptr = head->next; 
	while(n!=count && ptr->next!=NULL){
		ptr = ptr->next; 
		if(ptr->color==color)
			count++; 
	}
	return ptr; 
}

void insert(int n, char color, node *head, node *sub){
	node *ptr, *next; 
	ptr = searchInsertPoint(n, color, head); 
	next = ptr->next; 
	ptr->next = sub->next; 
	while(ptr->next!=NULL)
		ptr = ptr->next; 
	ptr->next = next; 	
}

void showAll(node *head){
	node *ptr; 
	ptr = head->next;

	do{
		ptr = ptr->next; 
		printf("%c", ptr->color); 
	}while(ptr->next!=NULL); 
	printf("\n"); 
}

void freeAll(node *list){
	node *del, *tmp = list; 
	
	while(tmp->next!=NULL){
		del = tmp; 
		tmp = tmp->next; 
		free(del); 
	}
}

int main(){
	node *head = NULL, *sub = NULL; 
	int n;
	char color; 

	while(scanf("%d", &n)!=EOF){
		if(n==0)
			break;

		sub = createList(n); 
		if(head==NULL){
			head = create('@'); 
			head->next = sub; 	
		}
		else{
			scanf("%d %c ", &n, &color); 
			insert(n, color, head, sub); 
		}
	}
	
	showAll(head); 

	freeAll(head); 

	return 0; 	
}
