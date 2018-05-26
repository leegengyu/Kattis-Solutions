#include <iostream>
#include <queue>
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

		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

		pq.push({0, s});

		while(!pq.empty()) { // Modified Dijkstra
			pair<int, int> min_ii = pq.top();
			
			pq.pop();
			
			if(dist[min_ii.second] < min_ii.first) // removing this will degenerate MD into a kind of BF
				continue;

			for(auto v_weight : AL[min_ii.second])
				if(dist[min_ii.second] + v_weight.second < dist[v_weight.first]) {
					dist[v_weight.first] = dist[min_ii.second] + v_weight.second;
					pq.push({dist[v_weight.first], v_weight.first});
				}
		}

		int t;
		
		while(q--) {
			cin >> t;

			if(dist[t] == 1e9)
				cout << "Impossible" << '\n';
			else
				cout << dist[t] << '\n';
		}

		cout << '\n';
	}
}
