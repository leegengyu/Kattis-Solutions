#include <iostream>
using namespace std;

int main() {
	int A, B, C, arr, dep, cost = 0, n = 3, time[101] = {0};
	
	cin >> A >> B >> C;
	
	while(n--) {
		cin >> arr >> dep;
		
		for(int i = arr + 1; i <= dep; i++) // arrival time not counted into cost
			time[i]++; // 1-indexed
	}

	for(auto i : time) {
		if(i == 1)
			cost += A;
		else if(i == 2)
			cost += B * 2;
		else if(i == 3)
			cost += C * 3;
	}
			
	cout << cost << '\n';
}