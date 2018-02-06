#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	int i, j, k, len, num, pangram, first = 1;
	char str[102], missing[26], alpha[26];

	scanf("%d", &num);

	for(i = 0; i <= num; i++) {
		fgets(str, 102, stdin);
		len = strlen(str); 
		if(str[len - 1] == '\n')
			str[len - 1] = '\0';

		k = 0;
		pangram = 1;
		for(j = 0; j < 26; j++) {
			missing[j] = '\0';
			alpha[j] = 0;
		}

		for(j = 0; str[j] != '\0'; j++) {
			first = 0;
			if(isupper(str[j]))
				alpha[str[j] - 'A']++;
			if(islower(str[j]))
				alpha[str[j] - 'a']++;
		}

		for(j = 0; j < 26; j++)
			if(alpha[j] == 0) {
				missing[k++] = j + 'a';
				pangram = 0;
			}

		missing[k] = '\0';
		if(first == 0) {
			if(pangram)
				printf("pangram\n");
			else
				printf("missing %s\n", missing);
		}
	}

	return 0;
}
