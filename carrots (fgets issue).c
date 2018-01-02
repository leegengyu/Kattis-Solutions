#include <stdio.h>
#include <string.h>

int main(void) {
	int i, len, contestants, problems;
	char temp[101];
	
	scanf("%d %d", &contestants, &problems);
	
	for(i = 0; i <= contestants; i++) {
		fgets(temp, 101, stdin);
		/*len = strlen(temp);
		if(temp[len - 1] == '\n')
			temp[len - 1] = '\0';*/
	}
	
	printf("%d", problems);
	
	return 0;
}