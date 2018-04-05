#include <cstdio>
#include <string>
using namespace std;

int main() {
	char c;
	string s;

	while((c = getchar_unlocked()) != '\n')
		c == '<' ? s.pop_back() : s.push_back(c);

	printf("%s\n", s.c_str());
}