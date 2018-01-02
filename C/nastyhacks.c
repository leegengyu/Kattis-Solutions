#include <stdio.h>

int main(void) {
	int i, num, revNoAd, revAd, cost, outcome[101] = {0};
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%d %d %d", &revNoAd, &revAd, &cost);
		if(revAd - revNoAd > cost)
			outcome[i]++;
		else if(revAd - revNoAd < cost)
			outcome[i] = -1;
	}
	
	for(i = 0; i < num; i++) {
		if(outcome[i] == 1)
			printf("advertise\n");
		else if(outcome[i] == -1)
			printf("do not advertise\n");
		else
			printf("does not matter\n");
	}

	return 0;
}