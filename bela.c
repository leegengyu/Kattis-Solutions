#include <stdio.h>

int main(void) {
	int i, hands, score = 0;
	char domsuit, card[3];
	
	scanf("%d %c", &hands, &domsuit);
	
	for(i = 0; i < 4 * hands; i++) {
		scanf("%s", card);
		
		if(card[1] == domsuit) {
			if(card[0] == 'J')
				score += 20;
			if(card[0] == '9')
				score += 14;
		}
		
		if(card[1] != domsuit)
			if(card[0] == 'J')
				score += 2;
			
		if(card[0] == 'A')
			score += 11;
		if(card[0] == 'K')
			score += 4;
		if(card[0] == 'Q')
			score += 3;
		if(card[0] == 'T')
			score += 10;
	}
	
	printf("%d\n", score);
	
	return 0;
}