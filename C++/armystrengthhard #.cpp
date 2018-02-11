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
	int t, ng, nm, temp;

	scanf("%d", &t);

	while(t--) {
		int g = 0, m = 0;

		fastRead_int(ng);
		fastRead_int(nm);
		while(ng--) {
			fastRead_int(temp);
			if(temp > g)
				g = temp;
		}

		while(nm--) {
			fastRead_int(temp);
			if(temp > m)
				m = temp;
		}

		if(m > g)
			printf("MechaGodzilla\n");
		else
			printf("Godzilla\n");
	}
}
