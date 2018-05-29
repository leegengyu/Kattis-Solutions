#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	int n;
	
	while(cin >> n, n) {
		double dim, box[n][4];
		string size;
		vector<string> v;
		
		for(int r = 0; r < n; r++) {
			for(int c = 0; c < 4; c++)
				cin >> dim, box[r][c] = dim;

			cin >> size, v.push_back(size);
		}
		
		int m;
		
		cin >> m;
		
		while(m--) {
			double x, y;
			int r, check;
			
			cin >> x >> y >> size;
			
			for(r = 0; r < n; r++) {
				check = (x >= box[r][0] && x <= box[r][2]) + (y >= box[r][1] && y <= box[r][3]);
				
				if(check == 2)
					break;
			}

			cout << size << " ";
			
			if(check == 2)
				v[r] == size ? cout << "correct" << '\n' : cout << v[r] << '\n';

			else
				cout << "floor" << '\n';
		}
		
		cout << '\n';
	}
}