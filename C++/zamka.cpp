#include <iostream>
using namespace std;

int main() {
	int L, D, X, ansMin = 1e9, ansMax = 0;
	
	cin >> L >> D >> X;

	for(int i = L; i <= D; i++)	{
		int temp = i, sum = 0;
		
		while(temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}
		
		if(sum == X) {
			ansMin = min(ansMin, i);
			ansMax = max(ansMax, i);
		}
	}

	cout << ansMin << '\n' << ansMax << '\n';
}