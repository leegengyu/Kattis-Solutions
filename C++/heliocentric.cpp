#include <iostream>
using namespace std;

int main() {
	int e, m, i = 1;
	
	while(cin >> e >> m) {
		int day = 0;
		
		while(e % 365 || m % 687)
			e++, m++, day++;
		
		cout << "Case " << i++ << ": " << day << "\n";
	}
}