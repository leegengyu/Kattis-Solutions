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
	int N, M, a, b;
	
	fastRead_int(N), fastRead_int(M);
	
	AL.assign(N, vector<int>());
	vis.assign(N, 0);
	
	while(M--) {
		fastRead_int(a), fastRead_int(b);
		a--, b--; // conversion to 0-based indexing
		// else need N + 1 rows in AL
		
		AL[a].push_back(b);
		AL[b].push_back(a); // bi-directional
	}
	
	dfs(0);
	
	bool conn = 1;
	
	for(int i = 0; i < N; i++)
		if(!vis[i]) {
			conn = 0;
			printf("%d\n", i + 1);
		}
		
	if(conn)
		printf("Connected\n");
}