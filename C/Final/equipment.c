#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node{
	char name[100]; 
	double value; 	
} node; 

void swap(node *a, node *b){
	node tmp; 
	strcpy(tmp.name, a->name); 
	strcpy(a->name, b->name); 
	strcpy(b->name, tmp.name); 
	tmp.value = a->value; 
	a->value = 	b->value; 
	b->value = tmp.value; 
}

void sort(node *arr, int n){
	int i, j, maxIndex; 
	for(i=0;i<n;i++){
		maxIndex = i; 
		for(j=i+1;j<n;j++){
			if(arr[j].value>arr[maxIndex].value)
				maxIndex = j; 
			else if(arr[j].value==arr[maxIndex].value)
				if(strcmp(arr[j].name, arr[maxIndex].name)>0)
					maxIndex = j; 
		}	
		swap(&arr[i], &arr[maxIndex]); 
	}	
}

void freeArr(node *arr, int n){
	int i; 
	for(i=n-1;i>=0;i--)
		free(&arr[i]); 
}

int main(){
	int s, e, i, j, k, num; 
	node *equip, *attr, tmp; 

	while(scanf("%d %d", &s, &e)!=EOF){
		equip = (node*)malloc(sizeof(node)*e); 
		attr = (node*)malloc(sizeof(node)*s); 
		
		for(i=0;i<s;i++)
			scanf("%s %lf", attr[i].name, &attr[i].value); 
		
		for(i=0;i<e;i++){
			scanf("%s %d", equip[i].name, &num); 	
			equip[i].value = 0; 
			for(j=0;j<num;j++){
				scanf("%s %lf", tmp.name, &tmp.value); 
				for(k=0;k<s;k++){
					if(!strcmp(tmp.name, attr[k].name)){
						equip[i].value += attr[k].value * tmp.value; 
						break;	
					}	
				}
			}
		}
	
		sort(equip, e); 

		for(i=0;i<e;i++)
			printf("%s\n", equip[i].name); 
	}


	return 0; 	
}
