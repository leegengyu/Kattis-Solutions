#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> v(3);
	string s;

	for(int i = 0; i < 3; i++)
		cin >> v[i];
	
	cin >> s;
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < 3; i++) {
		cout << v[s[i] - 'A'];
		if(i < 2)
			cout << " ";
	}
	
	cout << "\n";
}