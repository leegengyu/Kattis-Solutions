#include <stdio.h>

int main(void) {
	int i, num, min, max, count = 1, testcase[31];
	
	while(scanf("%d", &num) == 1) { // note scanf == 1 condition
		for(i = 0; i < num; i++)
			scanf("%d", &testcase[i]);
		
		min = testcase[0];
		max = testcase[0];
		
		for(i = 1; i < num; i++) {
			if(testcase[i] < min)
				min = testcase[i];
			if(testcase[i] > max)
				max = testcase[i];
		}
		
		printf("Case %d: %d %d %d\n", count, min, max, max - min);
		count++;
	}
	return 0;
}