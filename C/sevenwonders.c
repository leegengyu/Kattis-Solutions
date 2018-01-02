#include <stdio.h>
#include <string.h>

int main(void) {
	int i, min, t = 0, c = 0, g = 0;
	char str[51];
	
	scanf("%s", str); // why cannot use scanf %c != EOF?
	
	for(i = 0; i < strlen(str); i++) {	
		if(str[i] == 'T')
			t++;
		if(str[i] == 'C')
			c++;
		if(str[i] == 'G')
			g++;
	}

	min = g;
	if(t <= c && t <= g)
		min = t;
	if(c <= t && c <= g)
		min = c;

	printf("%d\n", min*7 + t*t + c*c + g*g);
	
	return 0;
}