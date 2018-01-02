#include <stdio.h>

int main(void) {
	int num, digitnum, bignum, tempsum, sum, multiply;
	
	while(1) {
		scanf("%d", &num);
		if(num == 0)
			break;
		
		sum = 0;
		digitnum = num;
		while(digitnum > 0) {
			sum += digitnum % 10;
			digitnum /= 10;
		}
		
		multiply = 11;
		while(1) {
			tempsum = 0;
			bignum = num * multiply;
			while(bignum > 0) {
				tempsum += bignum % 10;
				bignum /= 10;
			}
		
			if(sum == tempsum) {
				printf("%d\n", multiply);
				break;
			}
			multiply++;
		}
	}
	return 0;
}