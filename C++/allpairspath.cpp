#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	int n, m, q, u, v, w;
	
	while(cin >> n >> m >> q, n || m || q) {
		vector<vector<int>> AL(n, vector<int>(n, 1e9));

		for(int i = 0; i < n; i++)
			AL[i][i] = 0;

		for(int i = 0; i < m; i++)
			cin >> u >> v >> w, AL[u][v] = min(AL[u][v], w);

		// Floyd-Warshall
		for(int k = 0; k < n; k++)
			for(int i = 0; i < n; i++)
				for(int j = 0; j < n; j++)
					if(AL[i][k] < 1e9 && AL[k][j] < 1e9)
						AL[i][j] = min(AL[i][j], AL[i][k] + AL[k][j]);

		// Check for negative cycles
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				for(int k = 0; k < n; k++)
					if(AL[k][k] < 0 && AL[i][k] != 1e9 && AL[k][j] != 1e9)
						AL[i][j] = -1e9;

		while(q--) {
			cin >> u >> v;

			if(AL[u][v] == 1e9)
				cout << "Impossible" << '\n';
			else if(AL[u][v] == -1e9)
				cout << "-Infinity" << '\n';
			else
				cout << AL[u][v] << '\n';
		}

		cout << '\n';
	}
}
