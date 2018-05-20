#include <iostream>
using namespace std;

int value(int q0, int q1) {
	if((q0 == 1 && q1 == 2) ||  (q0 == 2 && q1 == 1))
		return 1000;
	else if(q0 == q1)
		return 100 * q0;
	else
		return 10 * max(q0, q1) + min(q0, q1);
}

int main() {
	int s0, s1, r0, r1;
	
	while(cin >> s0 >> s1 >> r0 >> r1, s0 || s1 || r0 || r1) {
		if(value(s0, s1) > value(r0, r1))
			cout << "Player 1 wins." << '\n';
		else if(value(r0, r1) > value(s0, s1))
			cout << "Player 2 wins." << '\n';
		else
			cout << "Tie." << '\n';
	}
}