#include <stdio.h>
#include <string.h>

int main() {
	char ciphertxt[500], key[500], message[500];

	scanf("%s %s", ciphertxt, key);

	int i, k = 0, keylen = strlen(key);
	
	for(i = 0; i < strlen(ciphertxt); i++) {
		if(key[i] == '\0') {
			int j = i, count = 0;

			while(j < strlen(ciphertxt) && count < keylen) {
				key[j++] = message[k++];
				count++;
			}

			key[j] = '\0';
		}
		
		message[i] = ciphertxt[i] - key[i] + 'A';
		
		if(message[i] < 'A')
			message[i] += 26;
	}
	
	message[i] = '\0';
	
	printf("%s\n", message);

	return 0;
}
