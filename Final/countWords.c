#include <stdio.h>
#include <string.h>
typedef struct _node{
	char word[21]; 
	int count; 
}node; 

void swap(node *a, node *b){
	node tmp; 
	strcpy(tmp.word, a->word); 
	strcpy(a->word, b->word); 
	strcpy(b->word, tmp.word); 
	tmp.count = a->count; 
	a->count = b->count; 
	b->count = tmp.count; 	
}

void sort(node *arr, int n){
	int i, j, minIndex; 
	for(i=0;i<n;i++){
		minIndex = i;
		for(j=i+1;j<n;j++)
			if(strcmp(arr[j].word, arr[minIndex].word)<0)
				minIndex = j; 
		swap(&arr[minIndex], &arr[i]);
	}
}

int main(){
	char str[21];
	node save[100] = {};  
	int i, isSave = 0; 
	while(scanf("%s", str)!=EOF){
		for(i=0;i<isSave;i++){
			if(!strcmp(str, save[i].word)){	
				save[i].count++; 
				break;
			}
		}	
		if(i==isSave){
			strcpy(save[isSave].word, str); 
			save[isSave].count = 1; 
			isSave++; 
		}
	}

	sort(save, isSave); 

	for(i=0;i<isSave;i++)
		printf("%s %d\n", save[i].word, save[i].count); 	
	
	return 0;
}
