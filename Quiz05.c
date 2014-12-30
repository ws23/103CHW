#include <stdio.h>

int main(){
	int m, n;
	int arr[10000]; 
	int i, max, min; 
	long long tmp;

	for(i=1;i<10000;i++){
		tmp = i;
		arr[i] = 1;  
		while(tmp!=1){
			tmp = tmp%2 ? 3*tmp+1 : tmp/2; 
			arr[i]++; 
		}
	}
	
	while(scanf("%d %d", &m, &n)!=EOF){
		if(m>n){
			i = m; 
			m = n; 
			n = i; 	
		}
		max = min = arr[m]; 
		for(i=m+1;i<=n;i++){
			max = arr[i]>max ? arr[i] : max; 
			min = arr[i]<min ? arr[i] : min; 	
		}

		m = min; 
		n = max; 
		max = min = arr[m]; 
		for(i=m+1;i<=n;i++){
			max = arr[i]>max ? arr[i] : max; 	
		}
		printf("%d\n", max); 
	}	
	return 0; 	
}
