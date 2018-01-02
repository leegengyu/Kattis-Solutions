typedef struct {
	int p1r1, p1r2, p2r1, p2r2, num1, num2;
} round_t;

#include <stdio.h>

int main(void) {
	int i = 0, j, temp;
	round_t round[10000];
	
	while(1) {
		scanf("%d %d %d %d", &round[i].p1r1, &round[i].p1r2, &round[i].p2r1, &round[i].p2r2);

		if(round[i].p1r1 == 0 && round[i].p1r2 == 0 && round[i].p2r1 == 0 && round[i].p2r2 == 0)
			break;
		
		if(round[i].p1r2 > round[i].p1r1) {
			temp = round[i].p1r2;
			round[i].p1r2 = round[i].p1r1;
			round[i].p1r1 = temp;
		}
		
		if(round[i].p2r2 > round[i].p2r1) {
			temp = round[i].p2r2;
			round[i].p2r2 = round[i].p2r1;
			round[i].p2r1 = temp;
		}
		
		round[i].num1 = round[i].p1r1 * 10 + round[i].p1r2;
		round[i].num2 = round[i].p2r1 * 10 + round[i].p2r2;

		i++;
	}
	
	for(j = 0; j < i; j++) {
		if(round[j].num1 == round[j].num2)
			printf("Tie.\n");
		else if(round[j].num1 == 21)
			printf("Player 1 wins.\n");
		else if(round[j].num2 == 21)
			printf("Player 2 wins.\n");
		else if((round[j].num1 % 11 == 0) && (round[j].num2 % 11 != 0))
			printf("Player 1 wins.\n");
		else if((round[j].num1 % 11 != 0) && (round[j].num2 % 11 == 0))
			printf("Player 2 wins.\n");
		else if(round[j].num1 > round[j].num2)
			printf("Player 1 wins.\n");
		else
			printf("Player 2 wins.\n");
	}
	return 0;
}