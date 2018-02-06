#include <stdio.h>

int main(void) {
	int r, count = 0, loop;
	int reg[8][2] = {{2}, {3}, {5}, {7}, {11}, {13}, {17}, {19}};
	
	for(r = 0; r < 8; r++)
		scanf("%d", &reg[r][1]);

	while(1) {
		loop = 0;
		for(r = 0; r < 8; r++)
			loop += (reg[r][1] == (reg[r][0] - 1));
		
		if(loop == 8)
			break;
		
		count++;
		reg[0][1]++;
		
		for(r = 0; r < 7; r++)
			if(reg[r][1] == reg[r][0]) {
				reg[r][1] = 0;
				reg[r + 1][1]++;
			}
	}
	
	printf("%d\n", count);
	
	return 0;
}