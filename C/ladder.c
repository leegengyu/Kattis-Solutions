#include <stdio.h>
#include <math.h>

int main(void) {
	int htwall, angle;
	
	scanf("%d %d", &htwall, &angle);
	
	printf("%.0f\n", ceil(htwall / (sin(angle / 180.0 * M_PI))));
	
	return 0;
}