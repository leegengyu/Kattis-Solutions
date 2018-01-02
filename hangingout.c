#include <stdio.h>

int main(void) {
	int limit, event, num, current = 0, count = 0;
	char direction[6];

	scanf("%d %d", &limit, &event);
	
	while(event--) {
		scanf("%s %d", &direction, &num);
		if(direction[0] == 'e')
			current += num;
		if(direction[0] == 'l')
			current -= num;
		
		if(current > limit) {
			current -= num;
			count++;
		}
	}
	
	printf("%d\n", count);
	
	return 0;	
}