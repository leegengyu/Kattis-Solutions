#include <iostream>
using namespace std;

int main() {
	int n, b, h, w, p, a, amt = 1e9;
	
	cin >> n >> b >> h >> w;
	
	while(h--) {
		cin >> p;
		
		for(int i = 0; i < w; i++) {
			cin >> a;
			if(a >= n)
				amt = min(p * n, amt);
		}
	}
	
	if(amt <= b)
		cout << amt << "\n";
	else
		cout << "stay home" << "\n";
}