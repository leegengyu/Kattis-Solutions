#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	int i, len;
	char str[82], newstr[82];
	
	while(fgets(str, 82, stdin)) {
		len = strlen(str);
		if(str[len - 1] == '\n')
			str[len - 1] = '\0';
		
		for(i = 0; str[i] != '\0'; i++)
			newstr[i] = tolower(str[i]);
		newstr[i] = '\0';
		
		if(strstr(newstr, "problem") == NULL)
			printf("no\n");
		else
			printf("yes\n");
	}
	
	return 0;
}