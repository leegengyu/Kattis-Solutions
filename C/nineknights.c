#include <stdio.h>

int validity(int, int, char [][5]);

int main(void) {
	int r, c, k = 0, valid = 1;
	char chess[5][5];
	
	for(r = 0; r < 5; r++)
		for(c = 0; c < 5; c++) {
			scanf(" %c", &chess[r][c]);
			if(chess[r][c] == 'k')
				k++;
		}
	
	if(k != 9) {
		valid = 0;
		printf("invalid\n");
	}
	
	for(r = 0; valid && r < 5; r++)
		for(c = 0; valid && c < 5; c++) {
			if(chess[r][c] == 'k' && validity(r, c, chess) > 0) {
				valid = 0;
				printf("invalid\n");
			}
		}

	if(valid)
		printf("valid\n");
	
	return 0;
}

int validity(int r, int c, char chess[][5]) {
	int count = 0;
	
	if(r - 1 > 0) {
		if(c + 2 < 5)
			count += (chess[r - 1][c + 2] == 'k');
		if(c - 2 > 0)
			count += (chess[r - 1][c - 2] == 'k');
	}
	
	if(r + 1 < 5) {
		if(c + 2 < 5)
			count += (chess[r + 1][c + 2] == 'k');
		if(c - 2 > 0)
			count += (chess[r + 1][c - 2] == 'k');
	}
		
	if(r - 2 > 0) {
		if(c + 1 < 5)
			count += (chess[r - 2][c + 1] == 'k');
		if(c - 1 > 0)
			count += (chess[r - 2][c - 1] == 'k');
	}
		
	if(r + 2 < 5) {
		if(c + 1 < 5)
			count += (chess[r + 2][c + 1] == 'k');
		if(c - 1 > 0)
			count += (chess[r + 2][c - 1] == 'k');
	}
	
	return count;
}