#include <stdio.h>

int main(void) {
	int num;
	char sound[];
	
	scanf("%d", &num);
	
	while(num--) {
		fgets(sentence, 101, stdin);
		len = strlen(sentence); 
		if(sentence[len - 1] == '\n')
			sentence[len - 1] = '\0';
		
	}
	return 0;
}