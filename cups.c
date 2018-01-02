typedef struct {
	char colour[21];
	int radius;
} cups_t;

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	int i, j, num, isSorted;
	char temp[21];
	cups_t cups[21], tmp;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%s", temp);
		if(isdigit(temp[0])) {
			cups[i].radius = (atoi(temp) / 2);
			scanf("%s", cups[i].colour);
		}
		else {
			strcpy(cups[i].colour, temp);
			scanf("%d", &cups[i].radius);
		}
	}

	for(i = num - 2; i >= 0; i--) {
		isSorted = 1;
		for (j = 0; j <= i; j++){ 
			if (cups[j].radius > cups[j + 1].radius) {
				tmp = cups[j];
				cups[j] = cups[j + 1];
				cups[j + 1] = tmp;
				isSorted = 0;
			}
		}
		if(isSorted)
			break;
	}
	
	for(i = 0; i < num; i++)
		printf("%s\n", cups[i].colour);
	
	return 0;
}