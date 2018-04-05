#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	
	int n, m, sN, sM;
	long long w = 0;
	vector<int> nN;
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++)
		cin >> sN, nN.push_back(sN);
	
	sort(nN.begin(), nN.end());
	
	while(m--) {
		cin >> sM;
		
		auto low = lower_bound(nN.begin(), nN.end(), sM);
		
		w += *low - sM;
	}
	
	cout << w << '\n';
}