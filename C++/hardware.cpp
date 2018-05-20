#include <iostream>
#include <map>
using namespace std;

int main() {
	int N, n, start, end, interval;
	char c;
	string s;
	
	cin >> N;
	
	while(N--) {
		map<int, int> m;
		int count = 0;
		
		cin.ignore();
		
		getline(cin, s);
		cout << s << '\n';
		
		cin >> n >> s;
		cout << n << " " << s << '\n';
		
		cin.ignore();
		
		while(1) {
			if(count == n)
				break;
			
			if(cin.peek() == '+') {
				cin >> c;
				
				cin >> start >> end >> interval;
				
				for(int i = start; i <= end; i += interval, count++) {
					int j = i;
					while(j > 0) {
						m[j % 10]++;
						j /= 10;
					}
				}
				
				if(count != n)
					cin.ignore();
			}
			
			else {
				count++;
				
				cin >> start;
				
				if(count != n)
					cin.ignore();
				
				while(start > 0) {
					m[start % 10]++;
					start /= 10;
				}
			}
		}
		
		count = 0;
		
		for(int i = 0; i <= 9; i++) {
			cout << "Make " << m[i] << " digit " << i << '\n';
			
			count += m[i];
		}
		
		cout << "In total " << count << " digit";
		
		if(count > 1)
			cout << "s";
		
		cout << '\n';
	}
}