#include <iostream>
using namespace std;

int main() {
	int n, count = 1;
	
	while(cin >> n) {
		int num, lo = 1000000, hi = -1000000;
		
		while(n--) {
			cin >> num;
			
			lo = min(lo, num);
			hi = max(hi, num);
		}
		
		cout << "Case " << count << ": " << lo << " " << hi << " " << hi - lo << '\n';
		count++;
	}
}