typedef struct {
	char name[21];
	double standtime, flytime;
} runner_t;

#include <stdio.h>

int main(void) {
	int i, j, num, limit, count, storedindex;
	double tempflytime, recordtime = 100.0;
	runner_t runners[500], temp;

	scanf("%d", &num);

	for(i = 0; i < num; i++)
		scanf("%s %lf %lf", runners[i].name, &runners[i].standtime, &runners[i].flytime);

	for(limit = num - 2; limit >= 0; limit--) { // sort flytime from fastest to slowest
		for(i = 0; i <= limit; i++) {
			if(runners[i].flytime > runners[i+1].flytime) {
				temp = runners[i];
				runners[i] = runners[i+1];
				runners[i+1] = temp;
			}
		}
	}

	for(i = 0; i < num; i++) {
		tempflytime = 0.0;

		count = 0;
		for(j = 0; count < 3; j++) { // find top 3 flytime
			if(j == i)
				continue;
			tempflytime += runners[j].flytime;
			count++;
		}

		if(tempflytime + runners[i].standtime < recordtime) {
			recordtime = tempflytime + runners[i].standtime;
			storedindex = i;
		}
	}

	printf("%f\n", recordtime);
	printf("%s\n", runners[storedindex].name);
	count = 0;
	for(j = 0; count < 3; j++) {
		if(j == storedindex)
			continue;
		printf("%s\n", runners[j].name);
		count++;
	}

	return 0;
}
