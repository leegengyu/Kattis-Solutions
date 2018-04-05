#include <iostream>
using namespace std;

int main() {
	int P, T, n = 0;
	
	cin >> P >> T;
	
	while(P--) {
		string s;
		bool fail = 0;
		
		for(int i = 0; i < T; i++) {
			cin >> s;
			
			for(int i = 1; fail == 0 && i < s.length(); i++)
				if(isupper(s[i])) {
					fail = 1;
					break;
				}
		}
		
		if(!fail)
			n++;
	}
	
	cout << n << '\n';
}