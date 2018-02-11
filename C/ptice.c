#include <stdio.h>

int main(void) {
	int i, num, adrian = 0, bruno = 0, goran = 0;
	char str[101];
	
	scanf("%d %s", &num, str);
	
	for(i = 0; i < num; i += 3)
		adrian += (str[i] == 'A') + (str[i+1] == 'B') + (str[i+2] == 'C');
	
	for(i = 0; i < num; i += 4)
		bruno += (str[i] == 'B') + (str[i+1] == 'A') + (str[i+2] == 'B') + (str[i+3] == 'C');
	
	for(i = 0; i < num; i += 6)
		goran += (str[i] == 'C') + (str[i+1] == 'C') + (str[i+2] == 'A') + (str[i+3] == 'A') + (str[i+4] == 'B') + (str[i+5] == 'B');
	
	if(adrian > bruno && adrian > goran)
		printf("%d\nAdrian\n", adrian);
	else if(bruno > adrian && bruno > goran)
		printf("%d\nBruno\n", bruno);
	else if(goran > adrian && goran > bruno)
		printf("%d\nGoran\n", goran);
	else if(adrian == bruno && adrian > goran)
		printf("%d\nAdrian\nBruno\n", adrian);
	else if(bruno == goran && bruno > adrian)
		printf("%d\nBruno\nGoran\n", bruno);
	else if(adrian == goran && adrian > bruno)
		printf("%d\nAdrian\nGoran\n", adrian);
	else
		printf("%d\nAdrian\nBruno\nGoran\n", adrian);

	return 0;
}