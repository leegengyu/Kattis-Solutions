#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);

	int n, m, q, s;

	while(cin >> n >> m >> q >> s, n || m || q || s) {
		int u, v, w;
		vector<vector<pair<int, int>>> AL(n, vector<pair<int, int>>());

		while(m--)
			cin >> u >> v >> w, AL[u].push_back({v, w});

		vector<int> dist(n, 1e9);
		dist[s] = 0;
		vector<bool> n_cycle(n, 0);

		// Relax all edges |V|-1 times.
		// Simple shortest path from source to any other vertex can have at most |V|-1 edges.
		for(int iter = 0; iter < n - 1; iter++) {
			for(int u = 0; u < n; u++)
				if(dist[u] < 1e9)
					for(auto e : AL[u])
						dist[e.first] = min(dist[e.first], dist[u] + e.second);
		}

		// Above step guarantees shortest distances if graph does not contain negative-weighted cycle.
		// If a shorter path is derived, then there is a negative-weighted cycle.
		bool ch = 1;
		while(ch) {
			ch = 0;

			for(int u = 0; u < n; u++) {
				if(dist[u] == 1e9)
					continue;

				for(auto e : AL[u])
					if(dist[u] + e.second < dist[e.first] && !n_cycle[e.first]) {
						dist[e.first] = -1e9;
						
						n_cycle[e.first] = 1;
						ch = 1;
					}
			}
		}

		int t;

		while(q--) {
			cin >> t;

			if(dist[t] == 1e9)
				cout << "Impossible" << '\n';
			else if(n_cycle[t])
				cout << "-Infinity" << '\n';
			else
				cout << dist[t] << '\n';
		}

		cout << '\n';
	}
}
