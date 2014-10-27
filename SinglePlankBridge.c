#include <stdio.h>

int main(){
	int t, length, n, location; 
	int max, min, minDistance; 
	int i;  
	scanf("%d", &t); 
	while(t--){
		scanf("%d %d", &length, &n); 	
		min = max = -1; 
		for(i=1;i<=n;i++){
			scanf("%d", &location); 
			if(location < length-location)
				minDistance = location; 
			else
				minDistance = length-location; 
			if(min < minDistance)
				min = minDistance; 
			if(max < (length-minDistance))
				max = length-minDistance; 
		}
		printf("%d %d\n", min, max); 
	}
	return 0; 	
}
