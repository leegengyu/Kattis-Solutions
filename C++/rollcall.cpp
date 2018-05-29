#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <sstream>
using namespace std;

int main() {
	string first, last;
	set<string> s;
	unordered_map<string, int> um;
	multimap<string, string> mm;

	while(cin >> first >> last)
		s.insert(last + " " + first); // sort by last name first

	for(auto i : s) {
		string tmp;
		stringstream ss(i);

		ss >> last >> first;

		um[first]++;

		mm.insert({last, first});
	}

	for(auto i : mm) {
		cout << i.second;

		if(um[i.second] > 1) // duplicate first name
			cout << " " << i.first;

		cout << '\n';
	}
}
