#include <iostream>
using namespace std;

int main() {
	int n, t, time, temp = 0, count = 0;
	
	cin >> n >> t;
	
	while(n--) {
		cin >> time;
		temp += time;
		
		if(temp <= t)
			count++;
	}
	
	cout << count << "\n";
}