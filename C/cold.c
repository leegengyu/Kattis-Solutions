#include <stdio.h>

int main(void) {
	int num, temp, count = 0;
	
	scanf("%d", &num);
	
	while(num--) {
		scanf("%d", &temp);
		if(temp < 0)
			count++;
	}
	
	printf("%d\n", count);
	
	return 0;
}