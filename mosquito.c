#include <stdio.h>

int main(void) {
	int mozzie, pupa, larva, eggrate, puparate, larvarate, weeks, finallarva;
	
	while(scanf("%d %d %d %d %d %d %d", &mozzie, &pupa, &larva, &eggrate, &larvarate, &puparate, &weeks) != EOF) {
		while(weeks > 0) {
			finallarva = mozzie * eggrate;
			mozzie = pupa / puparate;
			pupa = larva / larvarate;
			larva = finallarva;
			weeks--;
		}
		printf("%d\n", mozzie);
	}
	return 0;
}