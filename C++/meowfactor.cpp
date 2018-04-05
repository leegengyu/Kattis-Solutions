#include <iostream>
using namespace std;

int main() {
	int mf;
	unsigned long long n, temp;
	
	cin >> n;
	temp = n;
	
	for(int i = 128; i >= 1; i--) {
		int count = 0;
		while(count <= 8)
			if(temp % i == 0)
				temp /= i, count++;
			else
				break;
			
		if(count == 9) {
			mf = i;
			break;
		}
		
		temp = n;
	}
		
	cout << mf << "\n";
}