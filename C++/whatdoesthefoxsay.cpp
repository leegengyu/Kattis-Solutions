#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	char c;
	string s;
	
	cin >> t;
	
	while(t--) {
		vector<string> v;
		
		while(1) {
			cin >> s;
			v.push_back(s);
			
			if((c = getchar()) == '\n')
				break;
		}
		
		while(cin >> s >> s >> s) {
			if((c = getchar()) != '\n') {
				cin >> s >> s;
				break;
			}
			
			for(int i = 0; i < v.size(); i++)
				if(v[i] == s)
					v.erase(v.begin() + i), i--;
		}
		
		for(auto i : v)
			cout << i << " ";
			
		cout << "\n";
		v.clear();
	}
}