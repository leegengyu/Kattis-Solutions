#include <stdio.h>

int main(void) {
	int i, num;
	
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++)
		printf("%d Abracadabra\n", i);
	
	return 0;
}