#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	
	int n, limit;
	string str;
	
	while(cin >> n, n) {
		vector<string> name;
		
		for(int i = 0; i < n; i++)
			cin >> str, name.push_back(str);
			 
		stable_sort(name.begin(), name.end(), [](string s1, string s2) {
			return s1.substr(0, 2) < s2.substr(0, 2);
		});

		for(auto i : name)
			cout << i << '\n';
		
		cout << '\n';
	}
}