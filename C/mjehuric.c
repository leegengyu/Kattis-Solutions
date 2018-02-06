#include <stdio.h>

int main(void) {
	int i, j, temp, loop, num[5];
	
	for(i = 0; i < 5; i++)
		scanf("%d", &num[i]);
	
	while(1) {
		loop = 0;
		for(i = 0; i < 4; i++)
			if(num[i] > num[i + 1]) {
				temp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
				loop = 1;
				
				for(j = 0; j < 5; j++)
					printf("%d ", num[j]);
				printf("\n");
			}
			
		if(!loop)
			break;
	}
	
	return 0;
}