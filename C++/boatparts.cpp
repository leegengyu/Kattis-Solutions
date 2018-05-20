#include <iostream>
#include <set>
using namespace std;

int main() {
	int P, N, day = 0;
	string str;
	set<string> s;
	
	cin >> P >> N;
	
	while(N--) {
		if(s.size() != P)
			day++;
		
		cin >> str, s.insert(str);
	}
	
	if(s.size() == P)
		cout << day << '\n';
	else
		cout << "paradox avoided" << '\n';
}