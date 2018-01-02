typedef struct {
	int time;
	char qn, judging[6];
} log_t;

#include <stdio.h>
#include <string.h>

int main(void) {
	int j, k, i = 0, count = 0, time = 0;
	log_t entry[101];
	
	while(1) {
		scanf("%d", &entry[i].time);
		if(entry[i].time == -1)
			break;
		scanf(" %c %s", &entry[i].qn, entry[i].judging);
		i++;
	}
	
	for(j = 0; j < i; j++) {
		k = j - 1;
		
		if(strcmp(entry[j].judging, "right") == 0) {
			count++;
			time += entry[j].time;
			
			while(k > 0)
				if(entry[j].qn == entry[k--].qn)
					time += 20;
		}
	}
	
	printf("%d %d\n", count, time);
	
	return 0;
}