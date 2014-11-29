#include <stdio.h>
#include <string.h>

void add(int *c, int *a, int *b){
	int i; 

	memset(c, 0, sizeof(int)*1000); 
	for(i=0;i<1000;i++){
		c[i] += a[i] + b[i]; 
		if(c[i]>9){
			c[i] -= 10; 
			c[i+1]++; 	
		}
	}
}

void sub(int *c, int *a, int *b){
	int i, state; // state = 1 is a>b, -1 is b>a , 0 is a=b

	memset(c, 0, sizeof(int)*1000);

	state = 0; 
	for(i=999;i>=0;i--){
		if(a[i]>b[i]){
			state = 1; 
			break;	
		}	
		else if(a[i]<b[i]){
			state = -1; 
			break;	
		}
	}

	if(state==1){
		for(i=0;i<1000;i++){
			c[i] += a[i] - b[i]; 
			if(c[i]<0){
				c[i] += 10; 
				c[i+1]--;	
			}	
		}	
	}
	else if(state==-1){
		putchar('-'); 
		for(i=0;i<1000;i++){
			c[i] += b[i] - a[i]; 
			if(c[i]<0){
				c[i] += 10; 
				c[i+1]--; 
			}	
		}	
	}
}

char trans(int *num, char *str){
	int i, len; 
	char type; 

	memset(num, 0, sizeof(int)*1000); 
	len = strlen(str); 
	if(str[0]=='-')
		type = '-'; 
	else{
		num[len-1] = str[0]-'0'; 
		type = '+'; 
	}
	for(i=1;i<len;i++)
		num[len-1-i] = str[i]-'0'; 

	return type; 
}

void show(int *arr){
	int i, isZero;
	isZero = 1;  
	for(i=999;i>=0;i--){
		if(arr[i]!=0)
			isZero = 0; 	
		if(!isZero)
			printf("%d", arr[i]); 
	}	
	if(isZero)
		printf("0"); 
	printf("\n"); 
}

int main(){
	char inA[1000], inB[1000], op, opA, opB; 
	int a[1000], b[1000], c[1000]; 

	while(scanf(" %s %s %c", inA, inB, &op)!=EOF){
		opA = trans(a, inA); 
		opB = trans(b, inB); 		
		
		if(opA=='-'){
			if(opB==op)
				sub(c, b, a); 
			else{
				add(c, a, b); 
				putchar('-'); 
			}	
		}
		else if(opA=='+'){
			if(opB==op)
				add(c, a, b); 
			else
				sub(c, a, b); 
		}
		show(c); 
	}
	return 0; 	
}
