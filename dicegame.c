#include <stdio.h>

int main(void) {
	int g1, g2, g3, g4, e1, e2, e3, e4, gscore, escore;
	
	scanf("%d %d %d %d %d %d %d %d", &g1, &g2, &g3, &g4, &e1, &e2, &e3, &e4);
	
	gscore = g1 + g2 + g3 + g4;
	escore = e1 + e2 + e3 + e4;
	
	if(gscore > escore)
		printf("Gunnar\n");
	else if(escore > gscore)
		printf("Emma\n");
	else
		printf("Tie\n");
	
	return 0;
}