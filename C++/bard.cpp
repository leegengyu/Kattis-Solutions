#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
	int N, E, K, id, sum = 0;
	unordered_set<int> s[101]; // 1-indexed

	cin >> N >> E;

	while(E--) {
		cin >> K;

		bool bard = 0;
		vector<int> v;
		
		while(K--) {
			cin >> id;
			
			if(id == 1)
				bard = 1;
			
			v.push_back(id);
		}

		if(bard) {
			sum++;
			
			for(auto i : v)
				s[i].insert(sum);
		}
		
		else {
			unordered_set<int> temp;
			
			for(auto i : v)
				for(auto j : s[i])
					temp.insert(j);

			for(auto i : v)
				for(auto j : temp)
					s[i].insert(j);
			}
	}

	for(int i = 1; i <= N; i++)
		if(s[i].size() == sum)
			cout << i << '\n';
}