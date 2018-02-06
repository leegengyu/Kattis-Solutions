#include <stdio.h>

int main(void) {
	int junctions, switches;
	
	scanf("%d %d", &junctions, &switches);
	
	if(switches % 2 == 0)
		printf("possible\n");
	else
		printf("impossible\n");
	
	return 0;
}