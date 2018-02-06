#include <iostream>
#include <string>
using namespace std;

int guess(int, int);

int main(void) {
	while(guess(1, 1000));

	return 0;
}

int guess(int lo, int hi) {
	int mid;
	string s, down = "lower", co = "correct";
	
	mid = (lo + hi) / 2;
	cout << mid << "\n";
	
	cin >> s;
	
	if(s.compare(co) == 0)
		return 0;
	else if(s.compare(down) == 0)
		return guess(lo, mid - 1);
	else
		return guess(mid + 1, hi);
}