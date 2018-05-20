#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string s;
	vector<int> v;

	for(int i = 0; i < 3; i++)
		cin >> n, v.push_back(n);
	
	cin >> s;
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < 3; i++) {
		cout << v[s[i] - 'A'];
		
		if(i < 2)
			cout << " ";
	}
	
	cout << "\n";
}