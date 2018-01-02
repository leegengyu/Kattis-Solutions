#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j, k, m, n, len, repeat = 0;
	char str[81], frnttemp[81], backtemp[81];

	fgets(str, 81, stdin);
	len = strlen(str);
	if(str[len - 1] == '\n')
		str[len - 1] = '\0';

	for(i = 0; str[i] != '\0'; i++) {
		k = 0;

		for(j = i; str[j] != ' ' && str[j] != '\0'; j++) {
			frnttemp[k++] = str[j];
			frnttemp[k] = '\0';
		}

		m = j + 1;
		while(str[m] != '\0') {
			n = 0;

			for(; str[m] != ' ' && str[m] != '\0'; m++) {
				backtemp[n++] = str[m];
				backtemp[n] = '\0';
			}

			if(strcmp(frnttemp, backtemp) == 0) {
				printf("no\n");
				repeat = 1;
				break;
			}
			m++;
		}

		if(repeat)
			break;

		i = j;
	}

	if(repeat == 0)
		printf("yes\n");

	return 0;
}