#include <stdio.h>

int main(void) {
	int x1, x2, x3, x4, y1, y2, y3, y4;
	
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	
	if(x1 == x2)
		printf("%d ", x3);
	else if(x2 == x3)
		printf("%d ", x1);
	else
		printf("%d ", x2);
		
	if(y1 == y2)
		printf("%d\n", y3);
	else if(y2 == y3)
		printf("%d\n", y1);
	else
		printf("%d\n", y2);

	return 0;
}