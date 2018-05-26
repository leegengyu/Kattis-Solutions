#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	int N;
	
	cin >> N;
	
	for(int i = 1; i <= N; i++) {
		int S, L, pair, total = 0;
		vector<int> B, R;
		
		cin >> S;
		
		char C;
		
		while(S--) {
			cin >> L >> C;
			
			C == 'B' ? B.push_back(L - 1) : R.push_back(L - 1);
			// L - 1 instead of subtraction at final stage
		}
		
		sort(B.begin(), B.end());
		sort(R.begin(), R.end());
		
		while(B.size() && R.size()) {
			total += (B.back() + R.back());
			
			B.pop_back(), R.pop_back();
		}
		
		cout << "Case #" << i << ": " << total << '\n';
	}
}