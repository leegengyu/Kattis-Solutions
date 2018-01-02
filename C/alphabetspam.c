#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	int i, len;
	double whitespace = 0, lowercase = 0, uppercase = 0, symbol = 0;
	char line[100000];
	
	scanf("%s", line);
	len = strlen(line);
	if(line[len - 1] == '\n')
		line[len - 1] = '\0';
	len = strlen(line);
	
	for(i = 0; line[i] != '\0'; i++) {
		if(line[i] == '_')
			whitespace++;
		
		if(islower(line[i]))
			lowercase++;
		
		if(isupper(line[i]))
			uppercase++;
		
		if(line[i] != '_' && !isalpha(line[i]))
			symbol++;
	}
	
	printf("%f\n", whitespace / len);
	printf("%f\n", lowercase / len);
	printf("%f\n", uppercase / len);
	printf("%f\n", symbol / len);
	
	return 0;
}