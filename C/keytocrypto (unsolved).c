#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j, k = 0, count, keylen;
	char ciphertxt[501], key[501], message[501];

	scanf("%s %s", ciphertxt, key);

	keylen = strlen(key);

	for(i = 0; i < strlen(ciphertxt); i++) {	
		if(key[i] == '\0') {
			j = i;
			count = 0;

			while(count < keylen) {
				key[j++] = message[k++];
				count++;
			}

			key[j] = '\0';
		}

		message[i] = ciphertxt[i] - key[i] + 'A';
		if(message[i] < 'A')
			message[i] += 26;
	}

	printf("%s\n", message);

	return 0;
}
