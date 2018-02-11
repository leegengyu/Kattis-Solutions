#include <stdio.h>
#include <string.h>

int main(void) {
	int i, n, p;
	char s[101];
	
	scanf("%d %d %*c", &n, &p);
	
	for(i = 0; i < n; i++)
		fgets(s, 101, stdin);
	
	printf("%d\n", p);
	
	return 0;
}