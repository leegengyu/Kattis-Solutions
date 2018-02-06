#include <stdio.h>
#include <string.h>

void processLine(char []);

int main(void) {
	int i, num;
	char press[4000];

	scanf("%d", &num);
	getchar(); // read '\n'

	for(i = 1; i <= num; i++) {
		processLine(press);
		printf("Case #%d: %s\n", i, press);
	}

	return 0;
}

void processLine(char press[]) {
	int k, r, c, i = 0, prevrow = 9;
	char ch;
	char map[9][4] = {" ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

	while((ch = getchar()) != '\n') {
		for(r = 0; r < 9; r++)
			for(c = 0; c < 4; c++)
				if(ch == map[r][c]) {
					if(r == prevrow)
						press[i++] = ' ';
					prevrow = r;
					for(k = 0; k <= c; k++) {
						if(ch == ' ')
							press[i++] = 48 + r;
						else
							press[i++] = 48 + r + 1;
					}
				}
	}

	press[i] = '\0';
}