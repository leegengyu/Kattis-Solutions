#include <stdio.h>
#include <string.h>

int main(void) {
	int i, rot, j;
	char str[41], rstr[41];

	while(1) {
		scanf("%d", &rot);
		if(rot == 0)
			break;
		scanf("%s", str);

		for(i = 0; i < 41; i++)
			rstr[i] = '\0'; // clear rstr

		j = 0;
		for(i = strlen(str) - 1; i >= 0; i--)
			rstr[j++] = str[i]; // reverse str
		rstr[j] = '\0';

		for(i = 0; rstr[i] != '\0'; i++) {
			if(rstr[i] == '_')
				rstr[i] = 91;
			if(rstr[i] == '.')
				rstr[i] = 92;

			rstr[i] += rot;
			if(rstr[i] > 90) { // 'Z' = 90
				if(rstr[i] == 91)
					rstr[i] = '_';
				else if(rstr[i] == 92)
					rstr[i] = '.';
				else
					rstr[i] -= 28; // = 93 - 65
			}
			
			if(rstr[i] == 91)
				rstr[i] = '_';
			if(rstr[i] == 92)
				rstr[i] = '.';
		}
		printf("%s\n", rstr);		
	}
	return 0;
}
