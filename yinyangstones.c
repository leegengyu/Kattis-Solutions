#include <stdio.h>
#include <string.h>

int main(void) {
	int i, len, count = 0;
	char str[100001];

	scanf("%s", str);
	
	len = strlen(str);
	
	for(i = 0; str[i] != '\0'; i++)
		if(str[i] == 'B')
			count++;
	
	if(len / 2 == count)
		printf("1\n");
	else
		printf("0\n");
	
	return 0;
}