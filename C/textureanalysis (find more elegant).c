#include <stdio.h>
#include <string.h>

int main(void) {
	int i, initCount, count, ptnStar, ntEven, line = 0;
	char pattern[1001], ptnDup[1001], *tokenPtr;

	while(1) {
		line++;
		ptnStar = 1;
	
		scanf("%s", pattern);
		if(strcmp(pattern, "END") == 0)
			break;

		for(i = 0; pattern[i] != '\0'; i++)
			if(pattern[i] == '.')
				ptnStar = 0;
		
		strcpy(ptnDup, pattern);
		
		ntEven = 0;
		tokenPtr = strtok(pattern, "*");
		if(tokenPtr != NULL)
			initCount = strlen(tokenPtr);
		
		while(tokenPtr != NULL) {
			count = strlen(tokenPtr);
			if(initCount != count) {
				ntEven = 1;
				break;
			}
			tokenPtr = strtok(NULL, "*");
		}
		
		for(i = 0; ptnDup[i] != '\0'; i++)
			if(ptnDup[i] == '*' && ptnDup[i+1] == '*')
				ntEven = 1;
		
		if(ntEven && ptnStar == 0)
			printf("%d NOT EVEN\n", line);
		else
			printf("%d EVEN\n", line);
	}
	return 0;
}
