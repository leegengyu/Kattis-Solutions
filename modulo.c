#include <stdio.h>

int main(void) {
	int i, temp, count = 0, modulo[43] = {0};

	for(i = 0; i < 10; i++) {
		scanf("%d", &temp);
		modulo[temp % 42]++;
	}
	
	for(i = 0; i < 42; i++)
		if(modulo[i] > 0)
			count++;
		
	printf("%d\n", count);
	
	return 0;
}