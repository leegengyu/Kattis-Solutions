#include <iostream>
using namespace std;

int main() {
	int T, n;
	
	cin >> T;
	
	while(T--) {
		cin >> n;
		
		int i, pax, max = 0, win = 0;
		bool same;
		
		for(int k = 1; k <= n; k++) {
			cin >> i;
			max += i;
			
			if(i == win)
				same = 1;
			else if(i > win)
				win = i, pax = k, same = 0;
		}
		
		if((float)win / max > 0.5)
			cout << "majority winner " << pax << '\n';
		else if(same)
			cout << "no winner" << '\n';
		else
			cout << "minority winner " << pax << '\n';
	}
}