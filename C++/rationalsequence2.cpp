#include <iostream>
using namespace std;

int move(int l, int r) {
	if(l == r)
		return 1;
	
	if(l > r)
		return 2 * move(l - r, r) + 1;
	
	if(r > l)
		return 2 * move(l, r - l);
}

int main() {
	int p;
	char c;
	
	cin >> p;
	
	int i, l, r;
	
	while(p--) {
		cin >> i >> l >> c >> r;
		
		cout << i << " " << move(l, r) << "\n";
	}
}