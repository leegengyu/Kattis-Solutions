#include <stdio.h>

int main(void) {
	int i, j, num, dayinYr, mthinYr, dayinMth, dayStartofMth, count;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%d %d", &dayinYr, &mthinYr);
		count = 0;
		dayStartofMth = 0;
		
		for(j = 0; j < mthinYr; j++) {
			scanf("%d", &dayinMth);

			if(dayinMth >= 13 && dayStartofMth == 0)
				count++;
			
			dayStartofMth = ((dayinMth % 7) + dayStartofMth) % 7;
		}
		printf("%d\n", count);
	}
	return 0;
}