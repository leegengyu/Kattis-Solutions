#include <stdio.h>

int main(void) {
	int radius, margin;
	
	scanf("%d %d", &radius, &margin);
	
	printf("%f\n", ((float)(radius - margin) * (radius - margin)) / (radius * radius) * 100);
	
	return 0;
}