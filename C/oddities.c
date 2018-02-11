#include <stdio.h>

int main() {
	int n, i;
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%d", &i);
		
		printf("%d is ", i);
		(i % 2) ? printf("odd\n") : printf("even\n");
	}
}