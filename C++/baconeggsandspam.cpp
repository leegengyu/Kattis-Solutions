#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
	int n;
	
	while(cin >> n, n) {
		char c;
		string name, s;
		map<string, set<string>> m;
		
		while(n--) {
			cin >> name;
			while(cin >> s) {
				m[s].insert(name);
				
				if((c = getchar()) == '\n')
					break;
			}
		}
		
		for(auto i : m) {
			cout << i.first;
			for(auto j : i.second)
				cout << " " << j;
			cout << '\n';
		}
		
		cout << '\n';
	}
}