#include <iostream>
using namespace std;

int main() {
	int T;
	
	cin >> T;
	
	while(T--) {
		int ncs, ne, e, num = 0, cs[1000];
		double avgcs = 0, avge = 0;
		
		cin >> ncs >> ne;
		
		for(int i = 0; i < ncs; i++) {
			cin >> cs[i];
			avgcs += cs[i] / (float)ncs;
		}

		for(int i = 0; i < ne; i++) {
			cin >> e;
			avge += e / (float)ne;
		}
		
		for(int i = 0; i < ncs; i++)
			if(cs[i] < avgcs && cs[i] > avge)
				num++;
			
		cout << num << '\n';
	}
}