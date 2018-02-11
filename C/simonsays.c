#include <stdio.h>
#include <string.h>

int main(void) {
	int i, n;
	char s[101];
	
	scanf("%d", &n);
	scanf("%*c");
	
	while(n--) {
		fgets(s, 101, stdin);
		
		if(strstr(s, "Simon says") == NULL)
			continue;

		for(i = 11; s[i] != '\0'; i++)
			printf("%c", s[i]);
		printf("\n");
	}	
	
	return 0;
}