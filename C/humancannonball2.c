#include <stdio.h>
#include <math.h>
#define g 9.81

int main(void) {
	int i, num;
	float time, velo, angle, dist, ht1, ht2, posBall;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%f %f %f %f %f", &velo, &angle, &dist, &ht1, &ht2);
		
		angle = angle / 180 * M_PI; // conversion to radians
			
		time = dist / (velo * cos(angle));	
	
		posBall = (velo * time * sin(angle)) - (0.5 * g * time * time);
		
		if((posBall - ht1 >= 1) && (ht2 - posBall >= 1))
			printf("Safe\n");
		else
			printf("Not Safe\n");
	}
	return 0;
}