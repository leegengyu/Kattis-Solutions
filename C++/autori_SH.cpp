#include <iostream>
#include <sstream>
using namespace std;

int main(void) {
	string s, token;
	
	cin >> s;
	istringstream iss(s);
	
	while(getline(iss, token, '-'))
		cout << token[0];
	cout << '\n';
	
	return 0;
}