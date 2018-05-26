#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);

	int t;

	cin >> t;

	while(t--) {
		int l;
		string main, temp, pos_temp, pos_main;
		vector<pair<int, string>> v;
		unordered_map<char, string> m({
			{'q', "00"}, {'w', "01"}, {'e', "02"}, {'r', "03"}, {'t', "04"}, {'y', "05"}, {'u', "06"}, {'i', "07"}, {'o', "08"}, {'p', "09"},
			{'a', "10"}, {'s', "11"}, {'d', "12"}, {'f', "13"}, {'g', "14"}, {'h', "15"}, {'j', "16"}, {'k', "17"}, {'l', "18"},
			{'z', "20"}, {'x', "21"}, {'c', "22"}, {'v', "23"}, {'b', "24"}, {'n', "25"}, {'m', "26"}
		});

		cin >> main >> l;

		while(l--) {
			int count = 0;

			cin >> temp;

			for(int i = 0; i < main.length(); i++) {
				pos_temp = m[temp[i]];
				pos_main = m[main[i]];

				count += abs(pos_temp[0] - pos_main[0]) + abs(pos_temp[1] - pos_main[1]);
			}

			v.push_back({count, temp});
		}

		sort(v.begin(), v.end());

		for(auto i : v)
			cout << i.second << " " << i.first << '\n';
	}
}
