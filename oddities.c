#include <stdio.h>

int main(void) {
	int temp, entries;
	
	scanf("%d", &entries);

	while(entries--) {
		scanf("%d", &temp);
		
		if(temp % 2)
			printf("%d is odd\n", temp);
		else
			printf("%d is even\n", temp);
	}
	
	return 0;
}