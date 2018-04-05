#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int main() {
	long long N;
	set<long long> s;
	
	cin >> N;
	
	for(long long i = 0; i < sqrt(N); i++)
		if(N % (i + 1) == 0)
			s.insert(i), s.insert((N / (i + 1)) - 1);
	
	for(auto n : s)
		cout << n << " ";
	
	cout << '\n';
}