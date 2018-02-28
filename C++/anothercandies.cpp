#include <cstdio>

inline void fastRead_longlong(long long &x) {
	register long long c = getchar_unlocked();
	x = 0;
	int neg = 0;

	for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());

	if(c=='-') {
		neg = 1;
		c = getchar_unlocked();
	}

	for(; c>47 && c<58 ; c = getchar_unlocked())
		x = (x<<1) + (x<<3) + c - 48;

	if(neg)
		x = -x;
}

int main() {
	int t;
	
	scanf("%d", &t);
	
	while(t--) {
		int n, a = 0;
		long long c;
		
		scanf("%d", &n);
		
		for(int i = 0; i < n; i++) {
			fastRead_longlong(c);
			a += c % n;
		}
		
		a % n == 0 ? printf("YES\n") : printf("NO\n");
	}
}