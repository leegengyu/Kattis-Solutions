#include <stdio.h>
#include <string.h>

int main(void) {
	int i, t;
	char str[1001], output[991];
	
	scanf("%d", &t);
	scanf("%*c");
	
	while(t--) {
		fgets(str, 1001, stdin);

		if(strstr(str, "simon says") == NULL) {
			printf("\n");
			continue;
		}

		for(i = 11; str[i] != '\0'; i++)
			printf("%c", str[i]);
		printf("\n");
	}
	
	return 0;
}