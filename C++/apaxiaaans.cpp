#include <iostream>
using namespace std;

int main() {
	char temp = ' ';
	string s;
	
	cin >> s;
	
	for(int i = 0; i < s.length(); i++) {
		if(temp != s[i])
			cout << s[i];
		
		temp = s[i];
	}
	
	cout << "\n";
}