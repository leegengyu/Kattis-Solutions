#include <iostream>
using namespace std;

int main() {
	int n, T, time, temp = 0, count = 0;
	
	cin >> n >> T;
	
	while(n--) {
		cin >> time;
		temp += time;
		
		if(temp <= T)
			count++;
	}
	
	cout << count << "\n";
}