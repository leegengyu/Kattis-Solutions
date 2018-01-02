#include <stdio.h>

int main(void) {
	int i;
	char str[31];
	
	scanf("%s", str);
	
	for(i = 0; str[i] != '\0'; i++)
		if(str[i] == 's' && str[i+1] == 's') {
			printf("hiss\n");
			return 0;
		}

	printf("no hiss\n");
	
	return 0;
}