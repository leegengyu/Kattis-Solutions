#include <iostream>
using namespace std;

int main() {
	int odd = 0, arr[26] = {0};
	char c;
	
	while((c = cin.get()) != EOF)
		arr[c - 'a']++;
	
	for(int i = 0; i < 26; i++)
		if(arr[i] % 2)
			odd++;
	
	if(!odd)
		odd++;
	
	cout << odd - 1 << '\n';
}