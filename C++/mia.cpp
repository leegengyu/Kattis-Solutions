#include <iostream>
using namespace std;

int value(int, int);

int main(void) {
	int p1r1, p1r2, p2r1, p2r2;
	
	while(1) {
		cin >> p1r1 >> p1r2 >> p2r1 >> p2r2;

		if(p1r1 + p1r2 + p2r1 + p2r2 == 0)
			break;
		
		if(value(p1r1, p1r2) > value(p2r1, p2r2))
			cout << "Player 1 wins." << endl;
		else if(value(p2r1, p2r2) > value(p1r1, p1r2))
			cout << "Player 2 wins." << endl;
		else
			cout << "Tie." << endl;
	}

	return 0;
}

int value(int r1, int r2) {
	if((r1 == 1 && r2 == 2) ||  (r1 == 2 && r2 == 1))
		return 1000;
	else if(r1 == r2)
		return r1 * 100;
	else
		return 10 * max(r1, r2) + min(r1, r2);
}