#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	int i, j, len;
	char str[10001], newstr[60001];
	char newdict[26][7] = {"@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\\/[]",
						   "[]\\[]", "0", "|D", "(,)", "|Z", "$", "']['", "|_|", "\\/", "\\/\\/", "}{", "`/", "2"};
	
	fgets(str, 10001, stdin);	
	len = strlen(str); 
	if(str[len - 1] == '\n')
		str[len - 1] = '\0';
	
	for(i = 0; i < strlen(str); i++) {
		if(isalpha(str[i])) {
			if(isupper(str[i]))
				j = str[i] - 'A';
			if(islower(str[i]))
				j = str[i] - 'a';
			
			strcat(newstr, newdict[j]);
		}
		
		else
			newstr[strlen(newstr)] = str[i];
	}
		
	newstr[strlen(newstr)] = '\0';

	printf("%s\n", newstr);
	
	return 0;
}