#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j, num, len, count = 0;
	char str[1001], output[991];
	
	scanf("%d", &num);
	
	for(i = 0; i <= num; i++) {
		fgets(str, 1001, stdin);
		len = strlen(str);
		if(str[len - 1] == '\n')
			str[len - 1] = '\0';
		count++;
		
		if(count > 1) {
			if(strstr(str, "simon says") == NULL) {
				printf("\n");
				continue;
			}

			for(j = 11; str[j] != '\0'; j++)
				printf("%c", str[j]);
			printf("\n");
		}
	}
	
	return 0;
}