#include <cstdio>
#include <vector>
using namespace std;

vector<vector<int>> AL;
vector<int> vis;

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

void dfs(int u) {
	vis[u] = 1;
	
	for(auto v : AL[u])
		if(!vis[v]) 
			dfs(v);
}

int main() {
	int n, m, r, a, b;
	
	fastRead_int(n);
	
	while(n--) {
		fastRead_int(m), fastRead_int(r);
		
		AL.assign(m, vector<int>());
		vis.assign(m, 0);
		
		while(r--) {
			fastRead_int(a), fastRead_int(b);
			AL[a].push_back(b);
			AL[b].push_back(a);
		}
		
		int CC = 0;
		
		for(int i = 0; i < m; i++)
			if(!vis[i])
				CC++, dfs(i);
		
		printf("%d\n", CC - 1);
	}
}