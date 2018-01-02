#include <stdio.h>

int main(void) {
	int i, num, turtle, count;
	float turtletemp = 1;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		count = 0;
		while(1) {
			scanf("%d", &turtle);
			if(turtle == 0)
				break;
			if(turtle / turtletemp > 2.0)
				count += (turtle - (turtletemp * 2));
			turtletemp = turtle;
		}
		printf("%d\n", count);
	}
	return 0;
}