#include <stdio.h>
#include <math.h>

int main(void) {
	int i, j, star;
	
	scanf("%d", &star);

	printf("%d:\n", star);
	
	for(i = 2; i <= ceil(star / 2.0); i++)
		for(j = 1; j <= i; j++) {
			if((i - j <= 1) && ((star % (i + j) == i) || (star % (i + j) == 0)))
				printf("%d,%d\n", i, j);
		}
	
	return 0;
}