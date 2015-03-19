#include <stdio.h>

int main(){
	unsigned n;  
	int i, k; 

	while(scanf("%u %d", &n, &k)!=EOF)
		printf("%u\n", (n<<(32-k))>>31);		
	return 0; 	
}
