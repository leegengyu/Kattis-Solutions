#include <stdio.h>

int main(void) {
	int i, j, r, c, row, col, addrow, addcol;
	char init[50][50], mid[250][250], end[250][250];

	scanf("%d %d %d %d", &row, &col, &addrow, &addcol);

	for(r = 0; r < row; r++)
		for(c = 0; c < col; c++)
			scanf(" %c", &init[r][c]);

	for(r = 0; r < row; r++) {
		i = 0;
		for(c = 0; c < col; c++)
			for(j = 0; j < addcol; j++, i++)
				mid[r][i] = init[r][c];
	}

	j = 0;
	for(r = 0; r < row; r++)
		for(i = 0; i < addrow; i++, j++)
			for(c = 0; c < col * addcol; c++)
				end[j][c] = mid[r][c];

	for(r = 0; r < row * addrow; r++, printf("\n"))
		for(c = 0; c < col * addcol; c++)
			printf("%c", end[r][c]);

	return 0;
}