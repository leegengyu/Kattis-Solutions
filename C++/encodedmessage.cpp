#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;

	cin >> t;

	while(t--) {
		string s;

		cin >> s;

		int i = 0, dim = sqrt(s.length());
		char sq[dim][dim];

		for(int r = 0; r < dim; r++)
			for(int c = 0; c < dim; c++)
				sq[r][c] = s[i++];

		for(int c = dim - 1; c >= 0; c--)
			for(int r = 0; r < dim; r++)
				cout << sq[r][c];

		cout << '\n';
	}
}
