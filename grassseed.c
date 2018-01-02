#include <stdio.h>

int main(void) {
	int i, numLawn;
	float costPerArea, widthLawn, lengthLawn, totalcost = 0.0;
	
	scanf("%f %d", &costPerArea, &numLawn);
	for(i = 0; i < numLawn; i++) {
		scanf("%f %f", &widthLawn, &lengthLawn);
		totalcost += widthLawn * lengthLawn * costPerArea;
	}

	printf("%f", totalcost);
	
	return 0;
}