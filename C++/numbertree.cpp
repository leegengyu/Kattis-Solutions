#include <iostream>
using namespace std;

int main() {
	int H, index = 1;
	string path;

	cin >> H >> path;

	for(int i = 0; i < path.length(); i++)
		index = (index << 1) + (path[i] == 'R');
	
	cout << (1 << (H + 1)) - index << "\n";
}