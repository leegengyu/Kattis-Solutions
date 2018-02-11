#include <cstdio>
#include <algorithm>
using namespace std;

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
	int tc, l, n, nl;
	
	scanf("%d", &tc);
	
	while(tc-- && scanf("%d %d", &l, &n)) {
		int lo = -1, hi = -1;
		
		while(n--) {
			fastRead_int(nl);
			
			hi = max(hi, nl);
			hi = max(hi, l - nl);
			
			nl = min(nl, l - nl);
			lo = max(lo, nl);
		}
		
		printf("%d %d\n", lo, hi);
	}
}