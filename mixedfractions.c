#include <stdio.h>

int main(void) {
	int numer, denom;
	
	while(1) {
		scanf("%d %d", &numer, &denom);
		
		if(numer == 0 && denom == 0)
			break;
		
		printf("%d %d / %d\n", numer / denom, numer % denom, denom);
	}
	return 0;
}