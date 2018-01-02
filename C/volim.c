#include <stdio.h>
#define TIME_LIMIT 210

int main(void) {
	int i, num, playerNum, time, runningTime = 0, ans = -1;
	char response;
	
	scanf("%d %d", &playerNum, &num);
	
	for(i = 0; i < num; i++) {
		scanf("%d %c", &time, &response);
		runningTime += time;
		if(runningTime >= TIME_LIMIT && ans == -1)
			ans = playerNum;
		
		if(response == 'T') {
			playerNum++;
			if(playerNum == 9)
				playerNum = 1;
		}
	}
	
	printf("%d\n", ans);
	
	return 0;
}