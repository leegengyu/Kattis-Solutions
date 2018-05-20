#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);

	int t, n, m;

	cin >> t;

	while(t--) {
		cin >> n >> m;

		int k, s, total = 0;
		vector<int> v[n], p, stype(m + 1); // stype[0] unused because starts from 1

		for(int i = 0; i < n; i++) {
			cin >> k;

			while(k--)
				cin >> s, v[i].push_back(s);

			cin >> s, p.push_back(s);
		}

		for(int i = 1; i <= m; i++)
			cin >> s, stype[i] = s;

		for(int i = 0; i < n; i++) {
			int nStype = 100;
			for(auto j : v[i])
				nStype = min(nStype, stype[j]);

			total += nStype * p[i];
		}

		cout << total << '\n';
	}
}
