#include <stdio.h>

int main(void) {
	int i, r, c, num, row, col;
	char arr[20][21];

	scanf("%d", &num);

	for(i = 1; i <= num; i++) {
		scanf("%d %d", &row, &col);

		for(r = 0; r < row; r++)
			scanf("%s", arr[r]);

		printf("Test %d\n", i);
		for(r = row - 1; r >= 0; r--) {
			for(c = col - 1; c >= 0; c--)
				printf("%c", arr[r][c]);
			printf("\n");
		}
	}
	return 0;
}
