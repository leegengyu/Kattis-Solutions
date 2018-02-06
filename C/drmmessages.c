#include <stdio.h>
#include <string.h>

void merge(int, char []);
void rotate(int, int, char []);

int main(void) {
	int len;
	char str[15001];

	scanf("%s", str);

	len = strlen(str);

	rotate(0, len / 2, str);
	rotate(len / 2, len, str);

	merge(len, str);

	return 0;
}

void merge(int len, char str[]) {
	int i;

	for(i = 0; i < len / 2; i++) {
		str[i] += (str[i + len / 2] - 'A');

		while(str[i] > 'Z')
			str[i] -= 26;

		printf("%c", str[i]);
	}

	printf("\n");
}

void rotate(int start, int limit, char str[]) {
	int i, temp, value = 0;

	for(i = start; i < limit; i++)
		value += (str[i] - 'A');

	for(i = start; i < limit; i++) {
		temp = str[i] + value;

		// str[i] += value;
		// Above line does not work because range of char exists
		// from -127 to 127 only, and in this case, number post-addition
		// is > 127. Hence, number will wrap-around from -127.

		while(temp > 'Z')
			temp -= 26;

		str[i] = temp;
	}
}