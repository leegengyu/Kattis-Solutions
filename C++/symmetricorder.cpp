#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int n, j = 1;
	stack<string> name2;
	
	while(cin >> n, n) {
		string s;
		vector<string> name1;
		
		for(int k = 0; k < n; k++) {
			cin >> s;
			
			if(k % 2)
				name2.push(s);
			else
				name1.push_back(s);
		}
		
		cout << "SET " << j << "\n";
		for(int i = 0; i < name1.size(); i++)
			cout << name1[i] << "\n";
		
		while(!name2.empty()) {
			cout << name2.top() << "\n";
			name2.pop();
		}

		j++;
	}
}