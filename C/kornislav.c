#include <stdio.h>

int main(void) {
	int i, limit, temp, side[4];
	
	scanf("%d %d %d %d", &side[0], &side[1], &side[2], &side[3]);

	for(limit = 2; limit >= 0; limit--) {
		for(i = 0; i <= limit; i++) {
			if(side[i] > side[i+1]) {
				temp = side[i];
				side[i] = side[i+1];
				side[i+1] = temp;
			}
		}
	}

	printf("%d\n", side[0] * side[2]);

	return 0;
}