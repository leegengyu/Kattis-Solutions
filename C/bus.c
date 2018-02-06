#include <stdio.h>
#include <math.h>

int main(void) {
	int i, num, stops;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%d", &stops);
		printf("%d\n", (int)pow(2, stops) - 1);
	}
	return 0;
}