#include <stdio.h>

int main(void) {
	int x, y;
	
	scanf("%d %d", &x, &y);
	
	if(y == 1) {
		if(x == 0)
			printf("ALL GOOD\n");
		else
			printf("IMPOSSIBLE\n");
	}
	else
		printf("%f\n", x / (1.0 - y));
	
	return 0;
}