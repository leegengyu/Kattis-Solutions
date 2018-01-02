#include <stdio.h>
#include <math.h>

int main(void) {
	int iteration, count = 1;
	
	while(scanf("%d", &iteration) != EOF) {
		printf("Case %d: %.0f\n", count, ceil((iteration + 1) * (log(3) / log(10)) - (iteration * (log(2) / log(10)))));
		count++;
	}
	
	return 0;
}