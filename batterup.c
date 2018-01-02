#include <stdio.h>

int main(void) {
	int i, num, temp, count = 0;
	double sum;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%d", &temp);
		if(temp >= 0) {
			sum += temp;
			count++;
		}
	}
	printf("%f\n", sum / count);
		
	return 0;
}