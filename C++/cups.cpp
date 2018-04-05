#include <iostream>
#include <map>
using namespace std;

int main() {
	int N, n;
	string s;
	multimap<int, string> m;
	
	cin >> N, cin.ignore();
	
	for(int i = 0; i < N; i++) {
		char c = cin.peek();
		
		if(isdigit(c))
			cin >> n >> s, n /= 2;
		else
			cin >> s >> n;
		
		m.insert({n, s});
		
		cin.ignore();
	}
	
	for(auto i : m)
		cout << i.second << '\n';
}