#include <stdio.h>
#include <string.h>

typedef struct _site{
	int x, y; 	
} site; 

void BFS(site start, char *maze[]){
	site queue[100]; 
	int front, back; 

	front = back = 0; 
	queue[0].x = start.x; 
	queue[0].y = start.y; 
	back++; 

	do{

		if(maze[queue[front].y+1][queue[front].x]=='O'){
			queue[back].x = queue[front]
		}

	}while(front!=back)
		


	
}

int main(){
	int n, w, h, i, j;  
	site start; 
	char maze[11][11]; 

	while(scanf("%d", &n)!=EOF){
		while(n--){
			scanf("%d %d", &w, &h); 
			memset(maze, 'X', sizeof(maze)); 
			for(i=1;i<=h;i++){
				for(j=1;j<=w;j++){
					scanf("%c", &maze[i][j]); 
					if(maze[i][j]=='S'){
						start.y = i; 
						start.x = j; 	
					}
				}
			}
			
			BFS(start, maze); 
			
			for(i=1;i<=h;i++){
				for(j=1;j<=w;j++)
					putchar(maze[i][j]); 
				putchar('\n'); 	
			}
		}
	}

	return 0; 	
}
