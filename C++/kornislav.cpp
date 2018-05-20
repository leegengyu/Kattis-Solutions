#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int side[4];
	
	cin >> side[0] >> side[1] >> side[2] >> side[3];

	sort(side, side + 4);

	cout << side[0] * side[2] << '\n';
}