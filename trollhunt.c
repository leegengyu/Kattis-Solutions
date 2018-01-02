#include <stdio.h>
#include <math.h>

int main(void) {
	int bridges, knights, pergrp, bridgesPerDay;
	
	scanf("%d %d %d", &bridges, &knights, &pergrp);
	
	bridgesPerDay = knights / pergrp;
	
	printf("%.0f\n", ceil((bridges - 1.0) / bridgesPerDay));

	return 0;
}