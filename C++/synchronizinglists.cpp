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

int main(){
	int n;
	pair<int,int> a[5001], b[5001];
	int c[5001];
	
	while(1) {
		fastRead_int(n);
		if(n == 0)
			break;
		
		for(int i = 0; i < n; i++) {
			fastRead_int(a[i].first);
			a[i].second = i;
		}
		
		for(int i = 0; i < n; i++) {
			fastRead_int(b[i].first);
			b[i].second = i;
		}
		
		sort(a, a + n, [](pair<int,int> i, pair<int,int> j) {
			return i.first < j.first;
		});
		
		sort(b, b + n, [](pair<int,int> i, pair<int,int> j) {
			return i.first < j.first;
		});
		
		for(int i = 0; i < n; i++)
			c[a[i].second] = b[i].first;
		
		for(int i = 0; i < n; i++)
			printf("%d\n", c[i]);
		printf("\n");
	}
}