#include <iostream>
#include <limits.h>
using namespace std;

int main(void) {
	int i, min, max, sum, tempSum, tempRunning, ansMin = INT_MAX, ansMax = 0;
	
	cin >> min >> max >> sum;

	for(i = min; i <= max; i++)	{
		tempRunning = i;
		tempSum = 0;
		
		while(tempRunning > 0) {
			tempSum += tempRunning % 10;
			tempRunning /= 10;
		}
		
		if(tempSum == sum) {
			if(i < ansMin)
				ansMin = i;
			if(i > ansMax)
				ansMax = i;
		}
	}

	cout << ansMin << endl << ansMax << endl;
	
	return 0;
}