#include<stdio.h>   

int main() {   
	int a, b, c, yy, mm, dd, y, m, d, w;   
	char day[7][10]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	int monthday[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	while(scanf("%d %d %d", &yy, &mm, &dd)!=EOF){
		if(mm==0)
			break;   
		y = yy;
		m = mm;
		d = dd; 
		if(y>1752 || (y==1752 && m>9) || (y==1752 && m==9 && d>=14)){   
			if(m==1 || m==2){   
				m = m+12;   
				y--;   
			}   
			c = y/100;   
			y = y%100;   
			w = (y+y/4+c/4-2*c+26*(m+1)/10+d-1)%7;   
			if(w<0)   
				w = w+7;   
		}  
		else {   
			w = (5+y+(y-1)/4)%7;   /*算出星期*/
			for(a=1;a<m;a++) 
				w = w+monthday[a-1];/*算出1月到該月前的總天數*/   
			if(y%4==0 && m>2)   
				w++;   
			w = (w+dd-1)%7;   
		}         
		printf("%s\n",day[w]);   
	}   
	return 0;   
} 
