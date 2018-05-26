#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>
using namespace std;

inline void fastRead_int(long long &x) {
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

inline void fastRead_string(char *str) {
	register char c = 0;
	register int i = 0;

	while (c < 33)
		c = getchar_unlocked();

	while (c != '\n') {
		str[i] = c;
		c = getchar_unlocked();
		i = i + 1;
	}

	str[i] = '\0';
}

int main() {
	int n, m;
	long long f;
	char str[31];
	string s;
	priority_queue<tuple<long long, int, string>> pq;
	
	cin >> n >> m;
	//scanf("%d %d", &n, &m);
	
	for(int i = 1; i <= n; i++) {
		fastRead_int(f);
		fastRead_string(str);
		s = string(str);
		
		pq.push(make_tuple(f * i, -i, s));
	}
	
	while(m--) {
		cout << get<2>(pq.top()) << "\n";
		//printf("%s\n", get<2>(pq.top()).c_str());

		pq.pop();
	}
}