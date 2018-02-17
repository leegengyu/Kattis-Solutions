// why does n & 0 not work but n & 1 works?
#include <cstdio>
#include <ios>
#include <stack>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	int n, temp;
	stack<int> l;

	scanf("%d", &n);
	
	while(n--) {
		scanf("%d", &temp);
		
		//if(!l.empty() && (((l.top() & 1) && (temp & 1)) || (!(l.top() & 1) && !(temp & 1))))
		//if(!l.empty() && !((l.top() + temp) & 1))
		if(!l.empty() && ((l.top() + temp) % 2) == 0)
			l.pop();
		else
			l.push(temp);
	}
	
	printf("%d\n", l.size());
}