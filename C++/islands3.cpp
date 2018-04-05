#include <iostream>
using namespace std;

int r, c;
char grid[51][51];

void fill(int i, int j) {
	if(grid[i][j] == 'W' || i < 0 || i >= r || j < 0 || j >= c)
        return;
    
    else {
        grid[i][j] = 'W';
        
        fill(i - 1, j);
        fill(i + 1, j);
        fill(i, j - 1);
        fill(i, j + 1);
    }
}

int main() {
    int min = 0;
    
    cin >> r >> c;
    
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> grid[i][j];
    
	for(int i = 0; i < r; i++)
		for(int j = 0; j < c; j++)
			if(grid[i][j] == 'L')
				fill(i, j), min++;

    cout << min << '\n';
}