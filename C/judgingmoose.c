#include <stdio.h>

int main(void) {
	int side1, side2;
	
	scanf("%d %d", &side1, &side2);
	
	if(side1 == 0 && side2 == 0)
		printf("Not a moose\n");
	else if(side1 == side2)
		printf("Even %d\n", 2 * side1);
	else {
		if(side1 > side2)
			printf("Odd %d\n", 2 * side1);
		else
			printf("Odd %d\n", 2 * side2);
	}
	
	return 0;
}