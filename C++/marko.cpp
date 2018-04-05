#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int N;
	string s;
	unordered_map<string, int> m;
	
	cin >> N;
	
	while(N--) {
		string temp;
		cin >> s;
		
		for(int i = 0; i < s.length(); i++) {
			if((s[i] == 'a') || (s[i] == 'b') || (s[i] == 'c'))
				temp.push_back('2');
			if((s[i] == 'd') || (s[i] == 'e') || (s[i] == 'f'))
				temp.push_back('3');
			if((s[i] == 'g') || (s[i] == 'h') || (s[i] == 'i'))
				temp.push_back('4');
			if((s[i] == 'j') || (s[i] == 'k') || (s[i] == 'l'))
				temp.push_back('5');
			if((s[i] == 'm') || (s[i] == 'n') || (s[i] == 'o'))
				temp.push_back('6');
			if((s[i] == 'p') || (s[i] == 'q') || (s[i] == 'r') || (s[i] == 's'))
				temp.push_back('7');
			if((s[i] == 't') || (s[i] == 'u') || (s[i] == 'v'))
				temp.push_back('8');
			if((s[i] == 'w') || (s[i] == 'x') || (s[i] == 'y') || (s[i] == 'z'))
				temp.push_back('9');
		}

		m[temp]++;
	}
	
	cin >> s;
	
	cout << m[s] << '\n';
}