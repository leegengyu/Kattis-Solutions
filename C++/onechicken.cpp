#include <cstdio>

int main() {
	int n, m;
	
	scanf("%d %d", &n, &m);
	printf("Dr. Chaz ");
	
	if(n > m)
		printf("needs %d more %s of chicken!\n", n - m, n - m > 1 ? "pieces" : "piece");
	else
		printf("will have %d %s of chicken left over!\n", m - n, m - n > 1 ? "pieces" : "piece");
}