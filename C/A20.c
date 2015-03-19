#include <stdio.h>
#define ab(x) (x>0?(x):(-x))

int main(){
	double x, y, divide, avg;
	printf("Enter a positve number: "); 
	scanf("%lf", &x);
	avg = 1; 
	do{
		y = avg; 
		divide = x/y; 
		avg = (y+divide)/2; 
	}while(ab((avg-y))>=0.00001); 
	
	printf("Square root: %.5lf\n", y); 
	return 0; 	
}
