#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v(5);
	
	for(int i = 0; i < 5; i++)
		cin >> v[i];
	
	while(!is_sorted(v.begin(), v.end())) {
		for(int i = 0; i < 4; i++)
			if(v[i] > v[i + 1]) {
				swap(v[i], v[i + 1]);
				
				for(auto j : v)
					cout << j << " ";
				cout << '\n';
			}
	}
}
