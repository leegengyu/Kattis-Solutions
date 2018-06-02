#include <iostream>
using namespace std;

int main() {
	int N, mainR, secR;
	
	cin >> N >> mainR;
	
	while(--N) {
		cin >> secR;
		
		int tmainR = mainR;
		
		for(int temp = secR; temp >= 1; temp--)
			if(tmainR % temp == 0 && secR % temp == 0) // common factor
				tmainR /= temp, secR /= temp;
		
		cout << tmainR << "/" << secR << '\n';
	}
}