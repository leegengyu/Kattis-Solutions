#include <stdio.h>

int main(void) {
	int hr, min;
	
	scanf("%d %d", &hr, &min);

	if(min < 45) {
		min = 60 - (45 - min);
		
		if(hr == 0)
			hr = 23;
		else
			hr--;
	}
	
	else
		min -= 45;
	
	printf("%d %d", hr, min);
	
	return 0;
}