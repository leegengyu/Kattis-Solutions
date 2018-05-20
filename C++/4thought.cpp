#include <iostream>
using namespace std;

int main() {
	int m, n;
	
	cin >> m;
	
	while(m--) {
		cin >> n; // // 4 * 4 * 4 = 64 possibilities
		// actually only have 22 different answers
		
		if(n == -60)
			cout << "4 - 4 * 4 * 4 = -60" << '\n';
		else if(n == -16)
			cout << "4 - 4 * 4 - 4 = -16" << '\n';
		else if(n == -15)
			cout << "4 / 4 - 4 * 4 = -15" << '\n';
		else if(n == -8)
			cout << "4 - 4 - 4 - 4 = -8" << '\n';
		else if(n == -7)
			cout << "4 / 4 - 4 - 4 = -7" << '\n';
		else if(n == -4)
			cout << "4 / 4 / 4 - 4 = -4" << '\n';
		else if(n == -1)
			cout << "4 - 4 / 4 - 4 = -1" << '\n';
		else if(n == 0)
			cout << "4 + 4 - 4 - 4 = 0" << '\n';
		else if(n == 1)
			cout << "4 * 4 / 4 / 4 = 1" << '\n';
		else if(n == 2)
			cout << "4 / 4 + 4 / 4 = 2" << '\n';
		else if(n == 4)
			cout << "4 + 4 / 4 / 4 = 4" << '\n';
		else if(n == 7)
			cout << "4 + 4 - 4 / 4 = 7" << '\n';
		else if(n == 8)
			cout << "4 + 4 + 4 - 4 = 8" << '\n';
		else if(n == 9)
			cout << "4 + 4 + 4 / 4 = 9" << '\n';
		else if(n == 15)
			cout << "4 * 4 - 4 / 4 = 15" << '\n';
		else if(n == 16)
			cout << "4 + 4 + 4 + 4 = 16" << '\n';
		else if(n == 17)
			cout << "4 / 4 + 4 * 4 = 17" << '\n';
		else if(n == 24)
			cout << "4 * 4 + 4 + 4 = 24" << '\n';
		else if(n == 32)
			cout << "4 * 4 + 4 * 4 = 32" << '\n';
		else if(n == 60)
			cout << "4 * 4 * 4 - 4 = 60" << '\n';
		else if(n == 68)
			cout << "4 * 4 * 4 + 4 = 68" << '\n';
		else if(n == 256)
			cout << "4 * 4 * 4 * 4 = 256" << '\n';
		else
			cout << "no solution" << '\n';
	}
}