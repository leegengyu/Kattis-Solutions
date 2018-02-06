#include <stdio.h>
#include <math.h>

int main(void) {
	int radius;
	
	scanf("%d", &radius);
	
	printf("%f\n", M_PI * radius * radius);
	printf("%f\n", 2.0 * radius * radius);
	
	return 0;
}