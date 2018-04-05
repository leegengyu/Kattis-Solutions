#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<string, string> m;

int main() {
	ios_base::sync_with_stdio(0);
	
	int T, n;

	cin >> T;
	
	while(T--) {
		cin >> n;
		
		string s1, s2, s3;
		vector<string> v;
		
		m.clear();
		
		for(int i = 0; i < n; i++) {
			cin >> s1 >> s2 >> s3;
			s1.pop_back();
			
			string temp;
			
			for(int j = 0; j < s2.length(); j++) {
				if(s2[j] == 'u')
					temp += "3", j += 5;
				else if(s2[j] == 'm')
					temp += "2", j += 6;
				else
					temp += "1", j += 5;
			}
			
			reverse(temp.begin(), temp.end());
			
			while(temp.length() != 10)
				temp += "2";

			m[s1] = temp;
			v.push_back(s1);
		}
		
		sort(v.begin(), v.end(), [](string a, string b) {
			if(m[a] != m[b])
				return (m[a] > m[b]);
			else
				return a < b;
		});
		
		for(auto i : v)
			cout << i << '\n';

		cout << "==============================" << '\n';
	}
}