#include <stdio.h>

int main(){
	int a, b, c, d; 
	int x, y, z; 

	while(scanf("%d %d %d %d", &a, &b, &c, &d)!=EOF){
		for(z=1;z<=d/c;z++)
			for(y=1;y<=(d-c*z)/b;y++)
				for(x=1;x<=(d-c*z-b*y)/a;x++)
					if(a*x+b*y+c*z==d)
						printf("%d %d %d\n", x, y, z); 
	}
	return 0; 	
}
