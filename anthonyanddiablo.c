#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void) {
	float area, perimeter;
	
	scanf("%f %f", &area, &perimeter);
	
	if(PI * pow((perimeter / (2 * PI)), 2) > area)
		printf("Diablo is happy!\n");
	else
		printf("Need more materials!\n");
	
	return 0;
}