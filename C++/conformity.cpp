#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	int a, n, hi = 1, count = 0;
	unordered_map<string, int> m;
	
	cin >> n;

	while(n--) {
		vector<int> v;

		for(int i = 0; i < 5; i++)
			cin >> a, v.push_back(a);

		sort(v.begin(), v.end());

		string s;

		for(auto i : v)
			s += to_string(i);

		m[s]++;
	}
	
	for(auto i : m)
		hi = max(hi, i.second);
	
	for(auto i : m)
		if(i.second == hi)
			count += i.second;
	
	cout << count << '\n';
}
