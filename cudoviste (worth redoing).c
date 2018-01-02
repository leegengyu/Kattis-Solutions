#include <stdio.h>

int main(void) {
	int r, c, row, col, counter[5] = {0};
	char map[50][50];
	
	scanf("%d %d", &row, &col);
	
	for(r = 0; r < row; r++)
		for(c = 0; c < col; c++)
			scanf(" %c", &map[r][c]);
	
	for(r = 0; r < row - 1; r++)
		for(c = 0; c < col - 1; c++)
			  if(map[r][c] != '#' && map[r][c+1] != '#' && map[r+1][c] != '#' && map[r+1][c+1] != '#')
				  counter[(map[r][c] == 'X') + (map[r][c+1] == 'X') + (map[r+1][c] == 'X') + (map[r+1][c+1] == 'X')]++;
	
	for(r = 0; r < 5; r++)
		printf("%d\n", counter[r]);
	
	return 0;
}