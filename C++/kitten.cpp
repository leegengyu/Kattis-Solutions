#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> pre;

void print(int u) {
	cout << u << " ";
	
	if(pre[u] != 0)
		print(pre[u]);
}

int main() {
	int K, a, b;
	string s;
	
	cin >> K;
	getline(cin, s);
	
	pre.assign(101, 0);
	
	while(1) {
		getline(cin, s);
		istringstream iss(s);
		
		iss >> a;
		if(a == -1)
			break;
		
		while(iss >> b)
			pre[b] = a;
	}
	
	print(K);
	cout << '\n';
}