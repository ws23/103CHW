#include <stdio.h>
#define CHECK(x, y, n) ((x)>=0 && (x)<=(n)-1 && (y)>=0 && (y)<=(n)-1 ? 1:0)
#define MEDIAN(x, y, z) ((x)>(y)? ((x)>(z)? ((y)>(z)? (y):(z) ):(x) ):((y)>(z)? ((x)>(z)? (x):(z) ):(y) ) )
#define POLYNOMIAL(x) 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6

int main(){
	printf("CHECK(%d, %d, %d) = %d\n", 3, 5+1, 7, CHECK(3, 5+1, 7));
	printf("MEDIAN(%d, %d, %d) = %d\n", 3, 5+1, 7, MEDIAN(3, 5+1, 7)); 
	printf("POLYNOMIAL(%lf) = %lf\n", 1243+0.10, POLYNOMIAL(1243+0.10)); 
	return 0; 	
}
