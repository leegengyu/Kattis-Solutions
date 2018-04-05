#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	
	string e, f;
	map<string, string> m;
	
	while(char n = cin.peek() != '\n') {
		cin >> e >> f;
		
		m[f] = e;
		
		char c = cin.get();
	}
	
	while(cin >> f) {
		auto it = m.find(f);
		
		if(it != m.end())
			cout << m[f] << '\n';
		else
			cout << "eh" << '\n';
	}
}