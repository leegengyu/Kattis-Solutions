#include <stdio.h>

int main(void) {
	int i, num, count = 1;
	char name[15][26];
	
	while(1) {
		scanf("%d", &num);
		if(num == 0)
			break;
		
		for(i = 0; i < num; i++)
			scanf("%s", name[i]);
			
		printf("SET %d\n", count);
		for(i = 0; i < num; i += 2)
			printf("%s\n", name[i]);
		
		if(num % 2) // odd
			i = num - 2;
		else // even
			i = num - 1;
		
		while(i > 0) {
			printf("%s\n", name[i]);
			i -= 2;
		}
		
		count++;
	}
	return 0;
}