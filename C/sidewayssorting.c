#include <stdio.h>
#include <ctype.h>

int correctWord(int, int, char [][16]);

int main(void) {
	int i, j, r, c, row, col, limit;
	char temp, text[16][16];
	
	while(1) {
		scanf("%d %d", &row, &col);
		
		if(row == 0 && col == 0)
			break;
		
		for(r = 0; r < row; r++)
			for(c = 0; c < col; c++)
				scanf(" %c", &text[r][c]);
			
		// bubble sort - sort by 1st alphabet 
		for(limit = col - 2; limit >= 0; limit--)
			for(i = 0; i <= limit; i++)
				if(tolower(text[0][i]) > tolower(text[0][i+1]))
					for(r = 0; r < row; r++) { // swap all accompanying alphabets
						temp = text[r][i];
						text[r][i] = text[r][i+1];
						text[r][i+1] = temp;
					}
						
		// bubble sort - sort by 2nd alphabet and onwards
		for(limit = col - 2; limit >= 0; limit--)
			for(i = 0; i <= limit; i++)
				for(j = 0; j < row; j++) // check each row, with the same 2 comparing col
					if(correctWord(j, i, text) && (tolower(text[j][i]) > tolower(text[j][i+1])))
						for(r = 0; r < row; r++) {
							temp = text[r][i];
							text[r][i] = text[r][i+1];
							text[r][i+1] = temp;
						}
					
		for(r = 0; r < row; r++) {
			for(c = 0; c < col; c++)
				printf("%c", text[r][c]);
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}

int correctWord(int j, int i, char text[][16]) {
	int r;
	
	for(r = 0; r < j; r++)
		if(tolower(text[r][i]) != tolower(text[r][i+1]))
			return 0;
		
	return 1;
}