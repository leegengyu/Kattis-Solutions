#include <stdio.h>

int main(void) {
	int i, num, tasktime, maxtime, count = 0, temp = 0;
	
	scanf("%d %d", &num, &maxtime);
	
	for(i = 0; i < num; i++) {
		scanf("%d", &tasktime);
		temp += tasktime;
		
		if(temp <= maxtime)
			count++;
	}
	
	printf("%d\n", count);
	
	return 0;
}