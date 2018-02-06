#include <stdio.h>
#include <string.h>

int main(void) {
	int i, count = 0;
	char cipher[301];
	
	scanf("%s", cipher);
	
	for(i = 0; i < strlen(cipher); i += 3)
		count += (cipher[i] != 'P') + (cipher[i+1] != 'E') + (cipher[i+2] != 'R');
	
	printf("%d\n", count);
	
	return 0;
}