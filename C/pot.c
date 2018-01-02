#include <stdio.h>
#include <math.h>

int main(void) {
	int temp, entries, sum = 0;
	
	scanf("%d", &entries);
	
	while(entries--) {
		scanf("%d", &temp);
		sum += pow(temp / 10, temp % 10);
	}
	
	printf("%d\n", sum);
	
	return 0;
}