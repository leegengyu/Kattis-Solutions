#include <cstdio>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int n, type, xy;
	
	while(scanf("%d", &n) != EOF) {
		int numS = 0, numQ = 0, numPQ = 0;
		bool solvedS = 1, solvedQ = 1, solvedPQ = 1;
		stack<int> s;
		queue<int> q;
		priority_queue<int> pq;
		
		while(n--) {
			scanf("%d %d", &type, &xy);
			
			if(type == 1)
				s.push(xy), q.push(xy), pq.push(xy), numS++, numQ++, numPQ++;
			
			if(type == 2) {
				if(numS == 0)
					solvedS = 0;
				else if(s.top() == xy && numS != 0)
					s.pop(), numS--;
				else
					solvedS = 0;

				if(numQ == 0)
					solvedQ = 0;
				else if(q.front() == xy && numQ != 0)
					q.pop(), numQ--;
				else
					solvedQ = 0;

				if(numPQ == 0)
					solvedPQ = 0;
				else if(pq.top() == xy && numPQ != 0)
					pq.pop(), numPQ--;
				else
					solvedPQ = 0;
			}
		}

		int check = solvedS + solvedQ + solvedPQ;
		if(check > 1)
			printf("not sure\n");
		else if(check == 0)
			printf("impossible\n");
		
		if(solvedS && !solvedQ && !solvedPQ)
			printf("stack\n");
		if(solvedQ && !solvedS && !solvedPQ)
			printf("queue\n");
		if(solvedPQ && !solvedS && !solvedQ)
			printf("priority queue\n");
	}
}