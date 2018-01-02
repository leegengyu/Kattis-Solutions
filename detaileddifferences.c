#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j, num;
	char str1[51], str2[51];
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%s %s", str1, str2);
		printf("%s\n%s\n", str1, str2);
		
		for(j = 0; str1[j] != '\0'; j++) {
			if(str1[j] == str2[j])
				printf(".");
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}