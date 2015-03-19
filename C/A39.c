#include <stdio.h>
#include <complex.h>

int main(){
	char op; 
	double _Complex c1, c2, ans; 
	double c1r, c1i, c2r, c2i; 

	while(scanf("%lf%lfi %lf%lfi %c", &c1r, &c1i, &c2r, &c2i, &op)!=EOF){
		c1 = c1r + c1i*I; 
		c2 = c2r + c2i*I; 

		if(op=='+')
			ans = c1 + c2; 
		else if(op=='-')
			ans = c1 - c2; 
		else if(op=='*')
			ans = c1 * c2; 
		else if(op=='/')
			ans = c1 / c2; 

		printf("%.2lf%+.2lfi %c %.2lf%+.2lfi = %.2lf%+.2lfi\n", c1r, c1i, op, c2r, c2i, creal(ans), cimag(ans)); 
	}
	
	return 0; 	
}
