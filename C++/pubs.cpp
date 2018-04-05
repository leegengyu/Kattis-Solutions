#include <cstdio>
#include <vector>
#include <queue>
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
	int n, m, a, b;
	bool imp = 0;
	queue<int> q; // BFS

	fastRead_int(n), fastRead_int(m);

	vector<vector<int>> E(n);
	vector<bool> pub(n, 0), vis(n, 0);

	for(int i = 0; i < m; i++) {
		fastRead_int(a), fastRead_int(b), --a; --b;

		E[a].push_back(b);
		E[b].push_back(a);
	}

	for(int i = 0; !imp && i < n; i++) {
		if(E[i].empty())
			imp = 1;
		
		if(!vis[i])
			q.push(i);

		while(!q.empty()) {
			int r = q.front();

			q.pop();

			for(int c = 0; c < E[r].size(); c++)
				if(!vis[E[r][c]]) {
					pub[E[r][c]] = !pub[r]; // if a house is present, build a pub
					// if a pub is present, build a house
					
					vis[E[r][c]] = 1;
					
					q.push(E[r][c]);
				}
		}
	}

	if(imp)
		printf("Impossible\n");
	else
		for(int i = 0; i < n; i++)
			pub[i] ? printf("pub ") : printf("house ");
		
	printf("\n");
}
