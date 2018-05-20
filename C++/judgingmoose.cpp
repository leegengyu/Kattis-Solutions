#include <iostream>
using namespace std;

int main() {
	int l, r;
	
	cin >> l >> r;
	
	if(l == 0 && r == 0)
		cout << "Not a moose" << '\n';
	else if(l == r)
		cout << "Even " << 2 * l << '\n';
	else
		cout << "Odd " << 2 * max(l, r) << '\n';
}