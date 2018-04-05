#include <cstdio>

inline void fastRead_int(int &x) {
	register int c = getchar_unlocked();
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
	int tc;
	
	scanf("%d", &tc);
	
	while(tc--) {
		int n, m, a;
		
		scanf("%d %d", &n, &m);
		
		while(m--)
			fastRead_int(a), fastRead_int(a);
		
		printf("%d\n", n - 1);
	}
}