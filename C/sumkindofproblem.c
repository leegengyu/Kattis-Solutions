#include <stdio.h>

int main(void) {
	int p, k, n;
	
	scanf("%d", &p);
	
	while(p--) {
		scanf("%d %d", &k, &n);
		printf("%d ", k);
		
		int i = (int)((n / 2.0) * (1 + n));
		printf("%d ", i); // Sum of first n int = n / 2 * (S1 + Sn)
		
		printf("%d ", n * n); // Sum of first n odd int = n / 2 * (1 + (n * 2 - 1))
		
		printf("%d\n", i * 2); // Sum of first n even int = 2 * sum of first n int
	}

	return 0;
}