#include <stdio.h>

int main(void) {
	int stones;
	
	scanf("%d", &stones);
	
	if(stones % 2)
		printf("Alice\n");
	else
		printf("Bob\n");

	return 0;
}