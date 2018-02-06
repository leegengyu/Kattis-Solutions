#include <stdio.h>
#include <string.h>

int main(void) {
	int i, num, win, count = 0;
	char str[1001];
	
	scanf("%d", &num);

	while(num--) {
		scanf("%s", str);
		win = 1;
		
		for(i = 0; i < strlen(str) - 1; i++)
			if(str[i] == 'C' && str[i+1] == 'D') {
				win = 0;
				break;
			}
		
		if(win)
			count++;
	}
	
	printf("%d\n", count);
	
	return 0;
}