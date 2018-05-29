#include <iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	while(N--) {
		string s;

		cin >> s;

		int i = 0, dim = 1;

		while(dim * dim < s.length())
			dim++;

		char sq[dim][dim];

		for(int r = 0; r < dim; r++)
			for(int c = 0; c < dim; c++)
				if(i >= s.length())
					sq[r][c] = '*';
				else
					sq[r][c] = s[i++];

		for(int c = 0; c < dim; c++)
			for(int r = dim - 1; r >= 0; r--)
				if(sq[r][c] != '*')
					cout << sq[r][c];

		cout << '\n';
	}
}
