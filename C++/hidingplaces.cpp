#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dr[8] = {2, 2, 1, -1, -2, -2, -1, 1};
int dc[8] = {-1, 1, 2, 2, 1, -1, -2, -2};

int main() {
	int n, high;
	queue<pair<int, int>> q;
	vector<vector<int>> board;
	vector<int> v;
	
	cin >> n;
	
	while(n--) {
		v.assign(8, -1);
		board.assign(8, v);
		
		string input;
		
		cin >> input;
		
		int r = 8 - (input[1] - '0');
		int c = input[0] - 'a';
		
		board[r][c] = 0;
		high = 0;
		
		q.push({r, c});
		
		while(!q.empty()) {
			r = q.front().first, c = q.front().second;
			q.pop();
			
			for(int j = 0; j < 8; j++){
				int nr = dr[j] + r;
				int nc = dc[j] + c;
				
				if(nr >= 8 || nr < 0 || nc >= 8|| nc < 0) // outside board
					continue;
				
				if(board[nr][nc] == -1) {
					board[nr][nc] = board[r][c] + 1;
					high = max(board[nr][nc], high);
					q.push({nr, nc});
				}
			}
		}
		
		cout << high;
		
		for(int r = 0; r < 8; r++)
			for(int c = 0; c < 8; c++)
				if(board[r][c] == high)
					printf(" %c%d", c + 'a', 8 - r);
	
		cout << '\n';
	}
}