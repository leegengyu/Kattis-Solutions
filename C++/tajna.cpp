#include <iostream>
using namespace std;

int main() {
	string enc;

	cin >> enc;

	int size = enc.length(), row = 1; // 1 row for prime numbers

	// finding a matrix with greatest number of rows such that r <= c
	for(int r = 1; r * r <= size; r++)
		if(size % r == 0)
			row = r;

	// no need to place string into a grid in CxR then output in RxC
	for(int r = 0; r < row; r++)
		for(int c = r; c < size; c += row)
			cout << enc[c];

	cout << '\n';
}
