#include <stdio.h>
#define PI 3.14159

int main(void) {
	int totalpt, circlept;
	float radius;
	
	while(1) {
		scanf("%f %d %d", &radius, &totalpt, &circlept);
		
		if(radius == 0 && totalpt == 0 && circlept == 0)
			break;
		
		printf("%f %f\n", PI * radius * radius, ((float)circlept / totalpt) * (2.0 * radius) * (2.0 * radius));
	}
	return 0;
}