#include <iostream>
using namespace std;

string word(int i) {
	string s;
	
	while(i > 0) {
		s.push_back('a' + i % 26);
		i /= 30;
	}
	
	return s;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int a;
	
	cin >> a >> a;
	a++;
	
	while(a--)
		cout << word(a) << " ";
	cout << "\n";
}