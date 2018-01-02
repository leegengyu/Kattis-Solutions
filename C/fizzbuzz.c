#include <stdio.h>

int main(void) {
	int i, num, divisor1, divisor2;
	
	scanf("%d %d %d", &divisor1, &divisor2, &num);
	
	for(i = 1; i <= num; i++) {
		if(i % divisor1 == 0 && i % divisor2 == 0)
			printf("FizzBuzz\n");
		else if(i % divisor1 == 0)
			printf("Fizz\n");
		else if(i % divisor2 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", i);
	}

	return 0;
}