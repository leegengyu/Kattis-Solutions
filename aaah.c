#include <stdio.h>
#include <string.h>

int main(void) {
	char able[1001], req[1001];
	
	scanf("%s %s", able, req);
	
	if(strcmp(able, req) > 0)
		printf("no\n");
	else
		printf("go\n");
	
	return 0;
}