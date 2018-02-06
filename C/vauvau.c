#include <stdio.h>

void countOutput(int);

int main(void) {
	int d1a, d1b, d2a, d2b, d1tot, d2tot, p1, p2, p3, count1 = 0, count2 = 0, count3 = 0;
	
	scanf("%d %d %d %d", &d1a, &d1b, &d2a, &d2b);
	scanf("%d %d %d", &p1, &p2, &p3);
	
	d1tot = d1a + d1b;
	d2tot = d2a + d2b;
	
	if((p1 % d1tot != 0) && (p1 % d1tot <= d1a))
		count1++;
	if((p1 % d2tot != 0) && (p1 % d2tot <= d2a))
		count1++;
	
	if((p2 % d1tot != 0) && (p2 % d1tot <= d1a))
		count2++;
	if((p2 % d2tot != 0) && (p2 % d2tot <= d2a))
		count2++;
	
	if((p3 % d1tot != 0) && (p3 % d1tot <= d1a))
		count3++;
	if((p3 % d2tot != 0) && (p3 % d2tot <= d2a))
		count3++;
	
	countOutput(count1);
	countOutput(count2);
	countOutput(count3);
	
	return 0;
}

void countOutput(int count) {
	if(count == 0)
		printf("none\n");
	if(count == 1)
		printf("one\n");
	if(count == 2)
		printf("both\n");
}