#include <iostream>
using namespace std;

int main() {
	int r, n, num, room[101] = {0};
	
	cin >> r >> n;
	
	for(int i = 0; i < n; i++)
		cin >> num, room[num] = 1; // 1-indexed, room[0] is unused
	
	if(r == n)
		cout << "too late" << '\n';
	else
		for(int i = 1; i <= r; i++) 
			if(room[i] == 0) {
				cout << i << '\n';
				break;
			}
}