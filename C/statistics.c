#include <stdio.h>

int main(void) {
	int num, temp, min, max, count = 1;
	
	while(scanf("%d", &num) == 1) { // note scanf == 1 condition
		min = 1000000;
		max = -1000000;
		while(num--) {
			scanf("%d", &temp);

			if(temp < min)
				min = temp;
			if(temp > max)
				max = temp;
		}

		printf("Case %d: %d %d %d\n", count, min, max, max - min);
		count++;
	}
	
	return 0;
}