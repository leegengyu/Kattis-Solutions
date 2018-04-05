#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
	string w;
	set<string> in;
	unordered_set<string> out;
	
	while(cin >> w)
		out.insert(w);

	for(auto i : out)
		for(auto j : out) {
			if(i == j)
				continue;
			
			in.insert(i + j), in.insert(j + i);
		}

	for(auto i : in)
		cout << i << '\n';
}