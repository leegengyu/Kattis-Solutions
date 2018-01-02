#include <stdio.h>

int main(void) {
	int i, min, max, sum, tempSum, tempRunning, ansMin, ansMax, firstMatch = 0;
	
	scanf("%d %d %d", &min, &max, &sum);

	for(i = min; i <= max; i++)	{
		tempRunning = i;
		tempSum = 0;
		
		while(tempRunning > 0) {
			tempSum += tempRunning % 10;
			tempRunning /= 10;
		}
		
		if(tempSum == sum && firstMatch == 0) {
			firstMatch = 1;
			ansMin = i;
			ansMax = ansMin;
		}

		else if(tempSum == sum && i > ansMax)
			ansMax = i;
	}

	printf("%d\n", ansMin);
	printf("%d\n", ansMax);
	
	return 0;
}