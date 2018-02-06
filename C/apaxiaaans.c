#include <stdio.h>
#include <string.h>

int main() {
	char temp = ' ', s[251];
	
	scanf("%s", s);
	
	for(int i = 0; i < strlen(s); i++) {
		if(temp != s[i])
			printf("%c", s[i]);
		
		temp = s[i];
	}
	
	printf("\n");
	
	return 0;
}