#include <stdio.h>

int guess(int, int);

int main(void) {
	while(guess(1, 1000));

	return 0;
}

int guess(int lo, int hi) {
	int mid;
	char resp[8];
	
	mid = (lo + hi) / 2;
	printf("%d\n", mid);
	
	scanf("%s", resp);
	
	if(resp[0] == 'c')
		return 0;
	else if(resp[0] == 'l')
		return guess(lo, mid - 1);
	else
		return guess(mid + 1, hi);
}