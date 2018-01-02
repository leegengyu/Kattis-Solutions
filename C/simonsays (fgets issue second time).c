#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j, num, len;
	char sentence[101];
	
	scanf("%d", &num);
	
	for(i = 0; i <= num; i++) {
		fgets(sentence, 101, stdin);
		len = strlen(sentence); 
		if(sentence[len - 1] == '\n')
			sentence[len - 1] = '\0';
		
		if(strstr(sentence, "Simon says") == NULL)
			continue;

		for(j = 11; sentence[j] != '\0'; j++)
			printf("%c", sentence[j]);
		printf("\n");
	}	
	return 0;
}