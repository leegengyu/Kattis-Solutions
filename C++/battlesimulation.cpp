#include <iostream>
using namespace std;

int main() {
	string s;
	
	cin >> s;
	
	for(int i = 0; i < s.length(); i++)
		if(i < (int)s.length() - 2 && s[i] + s[i + 1] + s[i + 2] == 224) // R = 82, B = 66, L = 76
			cout << "C", i += 2;
		else if(s[i] == 'R')
			cout << "S";
		else if(s[i] == 'B')
			cout << "K";
		else
			cout << "H";
	
	cout << '\n';
}