#include <cstdio>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

inline void fastWrite_int(int n) {
	int N = n, rev, count = 0;
	rev = N;
	if (N == 0) { putchar_unlocked('0'); putchar_unlocked('\n'); return ;}
	while ((rev % 10) == 0) { count++; rev /= 10;}
	rev = 0;
	while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}
	while (rev != 0) { putchar_unlocked(rev % 10 + '0'); rev /= 10;}
	while (count--) putchar_unlocked('0');
	putchar_unlocked('\n');
}

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
	int n, y, q;
	char str[21];
	string c;
	unordered_map<string, vector<int>> m;
	
	fastRead_int(n);
	for(int i = 0; i < n; i++) {
		scanf("%s", str);
		c = string(str);
		fastRead_int(y);
		m[c].push_back(y);
	}
	
	//for(auto i : m)
		//sort(i.second.begin(), i.second.end());
	
	for(auto i = m.begin(); i != m.end(); i++)
		sort((*i).second.begin(), (*i).second.end());
	
	fastRead_int(q);
	for(int i = 0; i < q; i++) {
		scanf("%s", str);
		c = string(str);
		fastRead_int(y);
		
		fastWrite_int(m[c][y - 1]);
	}
}