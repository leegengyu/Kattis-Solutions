#include <stdio.h>

int main(void) {
	int i, num, dist, prevtime, speed, elapsedtime, actualtime;
	
	while(1) {
		scanf("%d", &num);
		
		if(num == -1)
			break;
		
		dist = 0;
		prevtime = 0;
		
		for(i = 0; i < num; i++) {
			scanf("%d %d", &speed, &elapsedtime);
			actualtime = elapsedtime - prevtime;
			dist += speed * actualtime;
			prevtime = elapsedtime;
		}
		printf("%d miles\n", dist);
	}
	return 0;
}