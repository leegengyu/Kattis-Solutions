#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k, num, pos = 0;
	vector<int> v;
	
	cin >> n >> k;
	
	for(int i = 0; i < k; i++) {
		cin.ignore();
		
		if(cin.peek() == 'u') { // accesses next character
		// and does NOT skip leading white-spaces
			string s;
			cin >> s >> num;
			
			while(num--)
				v.pop_back();
		}
		
		else
			cin >> num, v.push_back(num);
	}
	
	for(auto i : v) {
		pos += i;
		pos %= n;
		
		while(pos < 0)
			pos += n;
	}
	
	cout << pos << "\n";
}