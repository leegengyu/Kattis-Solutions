#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	
	int P;

	cin >> P;

	while(P--) {
		vector<int> v;
		int ht, K, n = 20, step = 0;
		
		cin >> K;
		
		while(n--)
			cin >> ht, v.push_back(ht);

		for(int i = 1; i < 20; i++) { // Insertion Sort
			int j, temp = v[i];

			for(j = i - 1; j >= 0 && v[j] > temp; j--) {
				v[j + 1] = v[j];
				
				step++;
			}

			v[j + 1] = temp;
		}

		cout << K << " " << step << "\n";
	}
}
