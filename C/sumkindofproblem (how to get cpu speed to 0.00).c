#include <stdio.h>

int main(void) {
	int i, num, setnum, limit;
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%d %d", &setnum, &limit);
		printf("%d ", setnum);
		printf("%d ", (int)((limit / 2.0) * (1 + limit))); // Sum of first n int = n / 2 * (S1 + Sn)
		printf("%d ", limit * limit); // Sum of first n odd int = n / 2 * (1 + (n * 2 - 1))
		printf("%d\n", limit * (1 + limit)); // Sum of first n even int = 2 * sum of first n int
	}

	return 0;
}