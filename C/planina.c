#include <stdio.h>

int main(void) {
	int itrn, count = 1, pt = 3;

	scanf("%d", &itrn);

	while(itrn != count) {
		pt += pt - 1;
		count++;
	}

	printf("%d\n", pt * pt);

	return 0;
}