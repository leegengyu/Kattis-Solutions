#include <stdio.h>

int main(void) {
	int i, winneri, score1, score2, score3, score4, max = 0;

	for(i = 1; i <= 5; i++) {
		scanf("%d %d %d %d", &score1, &score2, &score3, &score4);
		if(score1 + score2 + score3 + score4 > max) {
			max = score1 + score2 + score3 + score4;
			winneri = i;
		}
	}
	
	printf("%d %d\n", winneri, max);
	
	return 0;
}