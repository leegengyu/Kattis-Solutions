#include <stdio.h>
#include <math.h>

int main(void) {
	int i = 0, j = 0;
	long long decimal;
	char bits[31];
	
	scanf("%lld", &decimal); // decimal goes up to 1000000000 in this problem, which is 30-digit long in binary

	while(decimal != 0) { // decimal to binary, reversed
		bits[i++] = decimal % 2;
		decimal /= 2;
	}
	
	while(i != 0) {
		decimal += bits[--i] * pow(2, j);
		j++;
	}
	
	printf("%lld\n", decimal);
	
	return 0;
}