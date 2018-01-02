#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j = 1, len;
	char coded[101], decoded[101] = {'\0'};
	
	fgets(coded, 101, stdin);
	len = strlen(coded);
	if(coded[len - 1] == '\n')
		coded[len - 1] = '\0';
	
	decoded[0] = coded[0];
	for(i = 1; coded[i] != '\0'; i++) {
		decoded[j++] = coded[i];
		if((coded[i] == 'a') || (coded[i] == 'e') || (coded[i] == 'i') || (coded[i] == 'o') || (coded[i] == 'u'))
			i += 2;
	}

	printf("%s\n", decoded);
	
	return 0;
}