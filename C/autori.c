#include <stdio.h>

int main(void) {
	int i, count = 1;
	char name[101], newname[10] = {'\0'};

	scanf("%s", name);

	newname[0] = name[0];
	
	for(i = 1; name[i] != '\0'; i++)
		if(name[i] == '-')
			newname[count++] = name[i+1];
	
	printf("%s", newname);
	
	return 0;
}