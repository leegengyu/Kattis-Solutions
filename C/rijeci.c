#include <stdio.h>

int main(void) {
	int temp, num, a = 0, b = 1;
	
	scanf("%d", &num);
	num--;
	
	while(num--) {
		temp = a;
		a = b;
		b += temp;;
	}
	
	printf("%d %d\n", a, b);
	
	return 0;
}