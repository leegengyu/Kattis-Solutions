#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int i, j, temp, loop, num[5];
	
	for(i = 0; i < 5; i++)
		cin >> num[i];
	
	while(1) {
		loop = 0;
		for(i = 0; i < 4; i++)
			if(num[i] > num[i + 1]) {
				swap(num[i], num[i + 1]);
				loop = 1;
				
				for(j = 0; j < 5; j++)
					cout << num[j] << " ";
				cout << '\n';
			}
			
		if(!loop)
			break;
	}
	
	return 0;
}
