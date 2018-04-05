#include <cstdio>

int main() {
	int N, M, S, min = 0, sec = 0;
	double slMin;
	
	scanf("%d", &N);
	
	while(N--) {
		scanf("%d %d", &M, &S);
		
		min += M, sec += S;
	}
	
	slMin = sec / (min * 60.0);
	
	slMin > 1 ? printf("%.7f\n", slMin) : printf("measurement error\n");
}