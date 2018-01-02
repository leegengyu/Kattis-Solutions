#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j, len, count = 0;
	char str[251], newstr[251] = {'\0'};
	
	scanf("%s", str);
	len = strlen(str);
	
	for(i = 0; i < len; i++) {
		newstr[count++] = str[i];
		if(str[i] == str[i+1]) {
			j = i;
			while(str[i] == str[j])
				j++;
			i = --j;
		}
	}
	
	printf("%s", newstr);

	return 0;
}