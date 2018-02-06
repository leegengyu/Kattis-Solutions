#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main(void) {
	int n, i, k, j = 1;
	string s;
	vector<string> name1;
	stack<string> name2;
	
	while(1) {
		cin >> n;
		if(n == 0)
			break;
		
		name1.clear();
		for(k = 0; k < n; k++) {
			cin >> s;
			
			if(k % 2)
				name2.push(s);
			else
				name1.push_back(s);
		}
		
		cout << "SET " << j << "\n";
		for(i = 0; i < name1.size(); i++)
			cout << name1[i] << "\n";
		
		while(!name2.empty()) {
			cout << name2.top() << "\n";
			name2.pop();
		}

		j++;
	}
	
	return 0;
}