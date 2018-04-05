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
	int n, m;
	
	while(scanf("%d %d", &n, &m), n || m) {
		int nA[1000001], mA[1000001], nI = 0, mI = 0, count = 0;
		
		for(int i = 0; i < n; i++)
			fastRead_int(nA[i]);
		
		for(int i = 0; i < m; i++)
			fastRead_int(mA[i]);
		
		while(nI < n && mI < m) {
			if(nA[nI] < mA[mI])
				nI++;
			else if(mA[mI] < nA[nI])
				mI++;
			else
				nI++, mI++, count++;
		}
		
		printf("%d\n", count);
	}
}