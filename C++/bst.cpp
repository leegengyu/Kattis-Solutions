#include <cstdio>
#include <map>
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
	int N, X;
	long long C = 0;
	map<int, int> m;
	
	fastRead_int(N);

	while(N--) {
		fastRead_int(X);
		
		int d = 0;
		auto it = m.lower_bound(X); // finds the predecessor
		
		if(it != m.end()) // not the biggest
			d = max(d, it->second + 1);
		if(it != m.begin()) // not the smallest
			d = max(d, (--it)->second + 1);
	  
		m[X] = d;
		C += d;
		
		printf("%lld\n", C);
	}
}