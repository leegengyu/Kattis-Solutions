#include <iostream>
using namespace std;

int main(void) {
	int num, temp, low, high, count = 1;
	
	while(cin >> num) {
		low = 1000000;
		high = -1000000;
		while(num--) {
			cin >> temp;
			
			low = min(low, temp);
			high = max(high, temp);
		}
		
		cout << "Case " << count << ": " << low << " " << high << " " << high - low << '\n';
		count++;
	}
	
	return 0;
}