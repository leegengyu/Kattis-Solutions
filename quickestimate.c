#include <stdio.h>
#include <string.h>

int main(void) {
	int i, num;
	char mainnum[102];
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%s", &mainnum);
		printf("%d\n", strlen(mainnum));
	}
	return 0;
}