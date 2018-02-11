#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	int n;
	char str[102]; // "Each phrase contains at least one and no more than 100 characters."
	// However, there is at least one test case failed when size of str is 101 instead.

	scanf("%d %*c", &n);

	while(n--) {
		int k = 0;
		bool pangram = 1;
		char missing[26] = {'\0'}, alpha[26] = {0};
		
		fgets(str, 102, stdin);
		
		for(int i = 0; str[i] != '\0'; i++) {
			if(isupper(str[i]))
				alpha[str[i] - 'A']++;
			if(islower(str[i]))
				alpha[str[i] - 'a']++;
		}

		for(int i = 0; i < 26; i++)
			if(alpha[i] == 0) {
				missing[k++] = i + 'a';
				pangram = 0;
			}
		
		pangram ? printf("pangram\n") : printf("missing %s\n", missing);
	}
	
	return 0;
}
