#include <iostream>
using namespace std;

void fill(char sky[][100], int r, int c, int row, int col) {
	if(sky[r][c] == '#')
		return;
	
	if(sky[r][c] == '-' && r >= 0 && r < row && c >= 0 && c < col) {
		sky[r][c] = '#';

		fill(sky, r - 1, c, row, col);
		fill(sky, r + 1, c, row, col);
		fill(sky, r, c - 1, row, col);
		fill(sky, r, c + 1, row, col);
	}
}

int main() {
	int row, col, k = 1;
	char sky[100][100];
	
	while(cin >> row >> col) {
		int s = 0;
		#include <iostream>
using namespace std;

int row, col;
char sky[101][101];

void fill(int r, int c) {
	if(sky[r][c] == '#' || r < 0 || r >= row || c < 0 || c >= col)
		return;
	
	if(sky[r][c] == '-') {
		sky[r][c] = '#';

		fill(r - 1, c);
		fill(r + 1, c);
		fill(r, c - 1);
		fill(r, c + 1);
	}
}

int main() {
	int k = 1;
	
	while(cin >> row >> col) {
		int s = 0;
		
		for(int r = 0; r < row; r++)
			cin >> sky[r];
		
		for(int r = 0; r < row; r++)
			for(int c = 0; c < col; c++)
				if(sky[r][c] == '-')
					fill(r, c), s++;
		
		cout << "Case " << k++ << ": " << s << "\n";	
	}
}