#include <iostream>
using namespace std;

int main(void) {
	int side1, side2;
	
	cin >> side1 >> side2;
	
	if(side1 == 0 && side2 == 0)
		cout << "Not a moose" << endl;
	else if(side1 == side2)
		cout << "Even " << 2 * side1 << endl;
	else
		cout << "Odd " << 2 * max(side1, side2) << endl;
	
	return 0;
}