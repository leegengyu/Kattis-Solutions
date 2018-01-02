#include <stdio.h>

int main(void) {
	int articles, factor;
	
	scanf("%d %d", &articles, &factor);
	
	printf("%d\n", ((factor - 1) * articles) + 1);
	
	return 0;
}