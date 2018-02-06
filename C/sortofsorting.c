#include <stdio.h>
#include <string.h>

int main(void) {
	int i, num, limit;
	char temp[21], name[200][21];
	
	while(1) {
		scanf("%d", &num);
		
		if(num == 0)
			break;
		
		for(i = 0; i < num; i++)
			scanf("%s", name[i]);
			 
		// bubble sort - sort by 1st alphabet
		for(limit = num - 2; limit >= 0; limit--) {
			for(i = 0; i <= limit; i++) {
				if(name[i][0] > name[i+1][0]) {
					strcpy(temp, name[i]);
					strcpy(name[i], name[i+1]);
					strcpy(name[i+1], temp);
				}
			}
		}
		
		// bubble sort - sort by 2nd alphabet
		for(limit = num - 2; limit >= 0; limit--) {
			for(i = 0; i <= limit; i++) {
				if(name[i][0] == name[i+1][0] && name[i][1] > name[i+1][1]) {
					strcpy(temp, name[i]);
					strcpy(name[i], name[i+1]);
					strcpy(name[i+1], temp);
				}
			}
		}
		
		for(i = 0; i < num; i++)
			printf("%s\n", name[i]);
		printf("\n");
	}

	return 0;
}