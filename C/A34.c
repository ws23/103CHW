#include <stdio.h>

int main(){
	int m, d, y; 
	char month[][10] = {"January", "February", "March", "April", "May", "June", 
						"July", "August", "September", "October", "November", "December"
						}; 

	printf("Enter a date (mm/dd/yyyy): "); 
	scanf("%d/%d/%d", &m, &d, &y); 
	printf("You entered the date %s %d, %d\n", month[m-1], d, y); 
	return 0; 	
}
