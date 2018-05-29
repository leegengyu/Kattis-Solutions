#include <iostream>
using namespace std;

int main() {
	int t, n;

	cin >> t;

	while(t--) {
		cin >> n;

		int tmp, lo = 99, hi = 0, sum = 0;

		for(int i = 0; i < n; i++) {
			cin >> tmp;

			sum += tmp;
			lo = min(lo, tmp);
			hi = max(hi, tmp);
		}

		sum /= n; // sum is now average

		cout << (sum - lo) * 2 + (hi - sum) * 2 << '\n';
	}
}
