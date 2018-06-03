#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	int t, n, num;

	cin >> t;

	while(t--) {
		string p;
		bool error = 0, r = 0;
		deque<int> d;

		cin >> p >> n;

		cin.ignore(); // ignore newline character

		for(int i = 0; i < n; i++) {
			cin.ignore(); // ignore "[" or "," before number

			cin >> num, d.push_back(num);
		}

		cin.ignore(); // ignore "]" for n > 0, ignore "[" for n == 0

		if(n == 0)
			cin.ignore(); // ignore "]"

		for(auto i : p) {
			if(i == 'R')
				r = !r;
			else { // if 'D'
				if(d.empty())
					error = 1;
				else if(r)
					d.pop_back();
				else if(!r)
					d.pop_front();
			}
		}

		if(error)
			cout << "error" << '\n';
		else {
			cout << "[";

			while(!d.empty()) {
				if(r)
					cout << d.back(), d.pop_back();
				else
					cout << d.front(), d.pop_front();

				if(!d.empty())
					cout << ",";
			}

			cout << "]" << '\n';
		}
	}
}
