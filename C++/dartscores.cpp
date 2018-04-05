#include <cstdio>
#include <cmath>

inline void fastRead(int &x) {
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
	int t, n;
	
	scanf("%d", &t);
	
	while(t--) {
		scanf("%d", &n);
		
		int x, y, sum = 0;
		double dist;
		
		while(n--) {
			fastRead(x), fastRead(y);
			
			dist = sqrt(x * x + y * y);
			
			if(!dist)
				sum--;
			
			while(dist <= 200)
				sum++, dist += 20;
		}
		
		printf("%d\n", sum);
	}
}