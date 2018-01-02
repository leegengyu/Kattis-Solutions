#include <stdio.h>

int main(void) {
	int given, months, used, balance;
	
	scanf("%d %d", &given, &months);
	
	balance = given * months;
	
	while(months--) {
		scanf("%d", &used);
		balance -= used;
	}
	
	printf("%d", balance + given);
	
	return 0;
}