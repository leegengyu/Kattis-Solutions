#include <stdio.h>
#include <math.h>

int main(void) {
	int i, num, req;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%d", &req);
		printf("%.0f\n", ceil(req / 400.0));
	}
	return 0;
}