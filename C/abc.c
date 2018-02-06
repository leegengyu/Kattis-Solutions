#include <stdio.h>

int main(void) {
	int i, limit, temp, num[3];
	char alp[4];
	
	scanf("%d %d %d %s", &num[0], &num[1], &num[2], alp);

	// Bubble sort 3 numbers, otherwise 6 cases
	for(limit = 3 - 2; limit >= 0; limit--)
		for(i = 0; i <= limit; i++)
			if(num[i] > num[i+1]) {
				temp = num[i];
				num[i] = num[i+1];
				num[i+1] = temp;
			}
	
	for(i = 0; i < 3; i++)
		printf("%d ", num[alp[i] - 'A']);
	printf("\n");
	
	return 0;
}