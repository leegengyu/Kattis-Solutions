#include <stdio.h>

int main(void) {
	int r, c, row, col, found = 0, out = 0, count = 0, loc[200][200];
	char map[200][200];
	
	scanf("%d %d", &row, &col);
	
	loc[0][0] = 1;
	for(r = 0; r < row; r++)
		for(c = 0; c < col; c++)
			scanf(" %c", &map[r][c]); // cannot check for 'T' here after scanning - why?
			
	r = 0;
	c = 0;
	while(!out) {
		loc[r][c]--;
		
		if(count > 40000)
			break;
		
		if(map[r][c] == 'T') {
			found = 1;
			out = 1;
			break;
		}
		
		else if(map[r][c] == 'N') {
			if(r - 1 < 0)
				out = 1;
			else {
				r--;
				loc[r][c]++;
			}
		}
		
		else if(map[r][c] == 'S') {
			if(r + 1 >= row)
				out = 1;
			else {
				r++;
				loc[r][c]++;
			}
		}
		
		else if(map[r][c] == 'E') {
			if(c + 1 >= col)
				out = 1;
			else {
				c++;
				loc[r][c]++;
			}
		}
		
		else if(map[r][c] == 'W') {
			if(c - 1 < 0)
				out = 1;
			else {
				c--;
				loc[r][c]++;
			}
		}
		
		count++;
	}

	if(found)
		printf("%d\n", count);
	else if(out)
		printf("Out\n");
	else
		printf("Lost\n");

	return 0;
}