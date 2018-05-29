#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int getPos(string s, int i) { // 0-indexed
	if(s[i] == ' ')
		return 26;
	else if(s[i] == '\'') // apostrophe character
		return 27;
	else
		return s[i] - 'A';
}

int main() {
	int N;

	cin >> N;
	cin.ignore();

	while(N--) {
		double time = 1; // start outside the circle next to first letter
		// on "GO" signal, picks up first disk and goes to next one
		string s;

		getline(cin, s);

		int prev = getPos(s, 0);

		for(int i = 1; i < s.length(); i++) {
			int pos = getPos(s, i);
			int gap = abs(pos - prev);

			if(gap >= 15)
				gap = 28 - gap; // run the opposite way

			// Perimeter of circle = PI * 60
			// Distance from alphabet to alphabet = (PI * 60) / 28 * gap = PI * 15 * gap / 7
			// Time taken = PI * gap / 7

			time += M_PI * gap / 7 + 1; // each pickup takes 1 sec

			prev = pos;
		}

		cout << fixed << setprecision(6) << time << '\n';
	}
}
