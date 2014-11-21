#include <stdio.h>

int main() {

	int n, i, count, j, flag;

	while (scanf("%d", &n) != EOF) {
		while (n!=1) {              
			flag = 1;
			for (i = 2; i*i <= n; i++) {
				if (n%i == 0) {
					count = 0;
					while (n%i == 0) {
						count++;
						n /= i;
					}
					flag = 0;
					break;
				}
			}
			if (flag) {
				printf("(%d^%d)", n, 1);
				n /= n;
			}
			else
				printf("(%d^%d)", i, count);            
		}
		printf("\n");
	}
	return 0;
}
