#include <stdio.h>

int main(){
	int n, i, choose;
	scanf("%d", &n);
	scanf("%d", &choose); 
	while(choose>=1 && choose<=4){
		if(choose==1){ // right triangle
			for(i=1;i<=n;i++)
				printf("%.*s\n", i, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
		}
		else if(choose==2){ // equilateral triangle
			for(i=1;i<=n;i++)
				printf("%*.*s\n", n+i-1, 2*i-1, "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
		}
		else if(choose==3){ // inverse equilateral triangle
			for(i=n;i>=1;i--)
				printf("%*.*s\n", n+i-1, 2*i-1, "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");	
		}
		else if(choose==4){ // diamond
			for(i=1;i<=n;i++)
				printf("%*.*s\n", n+i-1, 2*i-1, "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
			for(i=n-1;i>=1;i--)
				printf("%*.*s\n", n+i-1, 2*i-1, "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");		
		}
		scanf("%d", &choose); 
	}
	return 0;
}
