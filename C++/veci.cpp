#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string X, s;
	
	cin >> X;
	
	s = X;
	
	next_permutation(s.begin(), s.end());
	
	cout << (s > X ? s : "0") << '\n';
}