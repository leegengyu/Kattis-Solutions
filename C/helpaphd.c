#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, num;
	char str[10], num1[5], num2[5];
	
	scanf("%d", &num);
	
	while(num--) {
		scanf("%s", str);

		if(str[0] == 'P')
			printf("skipped\n");
		
		else {
			for(i = 0; str[i] != '+'; i++)
				num1[i] = str[i];
			num1[i] = '\0';
			
			i++;
			j = 0;
			for(; str[i] != '\0'; i++)
				num2[j++] = str[i];
			num2[j] = '\0';			
						
			printf("%d\n", atoi(num1) + atoi(num2));
		}
	}
	
	return 0;
}