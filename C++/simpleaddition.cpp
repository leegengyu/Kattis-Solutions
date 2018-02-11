#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s1, s2, sum;
	
	cin >> s1 >> s2;

	if(s1.length() < s2.length())
		swap(s1, s2);
	
	s1 = '0' + s1;

	int diff = s1.length() - s2.length();
	for(int i = 0; i < diff; i++)
		s2 = '0' + s2;

	for(int i = 0; i < s1.length(); i++)
		sum += '0';

	for(int i = (s1.length() - 1); i >= 0; i--) {
		int num1 = s1[i] - 48, num2 = s2[i] - 48;

		if(num1 + num2 > 9) {
			int number = (num1 + num2) / 10;
			s1[i - 1] += number;
			number *= 10;
			sum[i] = ((num1 + num2) - number) + 48;
		}
		else
			sum[i] = num1 + num2 + 48;
	}

	if(sum[0] == '0')
		cout << sum.substr(1, sum.length() - 1) << "\n";
	else
		cout << sum << "\n";
}
