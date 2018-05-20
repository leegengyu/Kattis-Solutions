#include <cstdio>
#include <vector>
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
	int n, p;
	long long sum = 0;
	vector<int> v;
	
	fastRead_int(n);
	
	while(n--) {
		fastRead_int(p);
		v.push_back(p);
	}
	
	sort(v.begin(), v.end(), [](int a, int b) {
		return a > b;
	});
	
	for(p = 2; p < v.size(); p += 3)
		sum += v[p];
	
	printf("%lld\n", sum);
}