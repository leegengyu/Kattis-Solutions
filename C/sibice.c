#include <stdio.h>
#include <math.h>

int main(void) {
	int i, lengthMatch, numMatch, widthBox, heightBox;
	
	scanf("%d %d %d", &numMatch, &widthBox, &heightBox);
	
	for(i = 0; i < numMatch; i++) {
		scanf("%d", &lengthMatch);
		if(lengthMatch <= sqrt(widthBox * widthBox + heightBox * heightBox))
			printf("DA\n");
		else
			printf("NE\n");
	}
	return 0;
}