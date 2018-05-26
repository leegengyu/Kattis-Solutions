#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	int hi = 0;
	string s, temp;
	priority_queue<string, vector<string>, greater <string>> pq;
	
	while(getline(cin, s)) {
		if(s.empty()) {
			while(!pq.empty()) {
				temp = pq.top();
				reverse(temp.begin(), temp.end());
				
				for(int i = 0; i < hi - temp.length(); i++)
					cout << " ";
				
				cout << temp << "\n";
				pq.pop();
			}
			
			hi = 0;
			cout << "\n";
		}
		
		else {
			hi = max((int)s.length(), hi);
		
			reverse(s.begin(), s.end());
			pq.push(s);
		}
	}
	
	while(!pq.empty()) {
		temp = pq.top();
		reverse(temp.begin(), temp.end());
		
		for(int i = 0; i < hi - temp.length(); i++)
			cout << " ";
		
		cout << temp << "\n";
		pq.pop();
	}
}