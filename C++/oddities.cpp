#include <iostream>
using namespace std;

int main() {
	int n, i;
	
	cin >> n;
	
	while(n--) {
		cin >> i;
		
		cout << i << " is " << ((i % 2) ? "odd" : "even") << "\n";
	}
}