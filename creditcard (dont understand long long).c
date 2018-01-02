#include <stdio.h>
#include <math.h>

long long convert(double);
long long apply_rate(long long, long long);

int main(void) {
	int i, num, count;
	double rate_double, debt_double, payment_double;
	long long rate, debt, payment;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%lf %lf %lf", &rate_double, &debt_double, &payment_double);
		rate = convert(rate_double);
		debt = convert(debt_double);
		payment = convert(payment_double);
		count = 0;
		while(debt > 0.0) {
			debt += apply_rate(rate, debt);
			debt -= payment;
			count++;
			if(count > 1200) {
				printf("impossible\n");
				break;
			}
		}
		if(count <= 1200)
			printf("%d\n", count);
	}
	return 0;
}

long long convert(double num) {
	return 100.0 * num + 0.5;
}

long long apply_rate(long long rate, long long debt) {
	long long big_thing = rate * debt;
	
	// division by 10000 to remove the initial multiplication by 100
	return big_thing / 10000 + (big_thing % 10000 >= 5000);
}