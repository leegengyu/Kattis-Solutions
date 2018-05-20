#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	int n, k, p1, p2;
	string m1, m2;
	
	while(cin >> n, n) {
		cin >> k;
		
		vector<int> w, t;
		w.assign(n, 0), t.assign(n, 0);
		
		int a = k * n * (n - 1) / 2;
		
		while(a--) {
			cin >> p1 >> m1 >> p2 >> m2;
			
			if((m1[0] == 'r' && m2[0] == 's') || (m1[0] == 'p' && m2[0] == 'r') || (m1[0] == 's' && m2[0] == 'p'))
				w[p1 - 1]++;
			else if(m1 == m2)
				continue;
			else
				w[p2 - 1]++;
			
			t[p1 - 1]++, t[p2 - 1]++;
		}
		
		for(int i = 0; i < n; i++)
			if(t[i] == 0)
				cout << "-" << '\n';
			else
				cout << setprecision(3) << fixed << (double)w[i] / t[i] << '\n';
		
		cout << '\n';
	}
}