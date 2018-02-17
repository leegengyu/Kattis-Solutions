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
	int t;
	
	scanf("%d", &t);
	
	while(t--) {
		int ncs, ne, e, num = 0, cs[200000];
		double avgcs = 0.0, avge = 0.0;

		scanf("%d %d", &ncs, &ne);
		
		for(int i = 0; i < ncs; i++) {
			fastRead_int(cs[i]);
			avgcs += cs[i] / (float)ncs;
		}

		for(int i = 0; i < ne; i++) {
			fastRead_int(e);
			avge += e / (float)ne;
		}
		
		for(int i = 0; i < ncs; i++)
			if(cs[i] < avgcs && cs[i] > avge)
				num++;
			
		printf("%d\n", num);
	}
}