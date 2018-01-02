#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	int len, count;
	double sum; // cannot use float
	char *tokenPtr, str[275]; // 25*10 + 24(spaces) + 1(\0)

	while(fgets(str, 275, stdin) != NULL) {
		len = strlen(str);
		if(str[len - 1] == '\n')
			str[len - 1] = '\0';

		char name[275] = {'\0'};
		count = 0, sum = 0.0;

		tokenPtr = strtok(str, " ");

		while(tokenPtr != NULL) {
			if(isdigit(tokenPtr[0])) {
				sum += atof(tokenPtr);
				count++;
			}
			else {
				strcat(name, tokenPtr);
				strcat(name, " ");
			}		
			tokenPtr = strtok(NULL, " ");
		}
		printf("%f %s\n", sum / count, name);
	}
	return 0;
}