#include <iostream>
using namespace std;

int main() {
	int i, n;
	string a, b;
	
	cin >> n >> a >> b;
	
	if(n % 2) {
		for(i = 0; i < a.length(); i++)
			if(a[i] == b[i]) {
				cout << "Deletion failed" << "\n";
				return 0;
			}
		
		cout << "Deletion succeeded" << "\n";
	}
	
	else
		a == b ? cout << "Deletion succeeded" << "\n" : cout << "Deletion failed" << "\n";
}