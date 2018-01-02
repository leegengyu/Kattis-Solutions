#include <stdio.h>
#include <math.h>

int main(void) {
	int serves, paul, opp;
	
	scanf("%d %d %d", &serves, &paul, &opp);
	
	if((int)(ceil((paul + opp + 1.0) / serves)) % 2)
		printf("paul\n");
	else
		printf("opponent\n");
	
	return 0;
}