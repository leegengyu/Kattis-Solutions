#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n, a, b, c;
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%d %d %d", &a, &b, &c);
		
		if(b > a)
			swap(a, b);
		
		a + b == c || a - b == c || a * b == c || (float)a / b == c ? printf("Possible\n") : printf("Impossible\n");
	}
}