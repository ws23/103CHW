#include <stdio.h>

double sin(double x){
	return x - x*x*x/(2*3) + x*x*x*x*x/(2*3*4*5) - x*x*x*x*x*x*x/(2*3*4*5*6*7); 
}

int main(){
	double x; 
	while(scanf("%lf", &x)!=EOF)
		printf("%.2lf\n", sin(x)); 
	return 0; 	
}
