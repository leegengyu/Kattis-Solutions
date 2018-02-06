#include <stdio.h>

int main(void) {
	int day, mth, daynum, startday[12] = {4, 7, 7, 3, 5, 1, 3, 6, 2, 4, 7, 2};
	char reqday[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	
	scanf("%d %d", &day, &mth);
	
	daynum = (startday[mth - 1] + ((day - 1) % 7)) % 7;
	
	printf("%s\n", reqday[daynum]);
	
	return 0;
}