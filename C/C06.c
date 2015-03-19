#include <stdio.h>
#include <string.h>
#define Max(x, y) x>y? x:y

int LCS(char*, char*, char*); 

int main() {
	char str[15][101]; 
	int n, i, j, k, max;
	int len[15]; 
	
	while(scanf("%d ", &n)!=EOF){
		for(i=0;i<n;i++){
			fgets(str[i], 100, stdin); 
			strtok(str[i], "\r\n"); 
			len[i] = strlen(str[i]); 
		}
		max = 0; 
		for(i=0;i<n-2;i++){
			for(j=i+1;j<n-1;j++){
				for(k=j+1;k<n;k++){
					if(max>len[i] || max>len[j] || max>len[k])
						continue; 
					max = Max(LCS(str[i], str[j], str[k]), max); 
				}
			}
		}
		printf("%d\n", max); 
	}
	return 0;
}

int LCS(char *s1, char *s2, char *s3){
	int lcs[101][101][101]; 
	int i, j, k; 

	memset(lcs, 0, sizeof(lcs)); 
	for(i=0;s1[i];i++){
		for(j=0;s2[j];j++){
			for(k=0;s3[k];k++){
				if(s1[i]==s2[j] && s2[j]==s3[k])
					lcs[i+1][j+1][k+1] = lcs[i][j][k] + 1; 
				else
					lcs[i+1][j+1][k+1] = Max(Max(lcs[i+1][j+1][k], lcs[i+1][j][k+1]), lcs[i][j+1][k+1]); 
			}	
		}	
	}
	return lcs[i][j][k];
}
