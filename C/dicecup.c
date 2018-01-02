#include <stdio.h>

int main(void) {
	int die1, die2;
	
	scanf("%d %d", &die1, &die2);
	
	if(die1 - die2 == 0)
		printf("%d\n", die1 + 1);
	else if(die1 - die2 > 0)
		while(die2 < die1 + 1) {
			die2++;
			printf("%d\n", die2);
		}
	else
		while(die1 < die2 + 1) {
			die1++;
			printf("%d\n", die1);
		}
	return 0;
}