#include <stdio.h>
#include <string.h>

int main(void) {
	char jon[1001], doc[1001];
	
	scanf("%s %s", jon, doc);
	
	if(strcmp(jon, doc) > 0)
		printf("no\n");
	else
		printf("go\n");
	
	return 0;
}