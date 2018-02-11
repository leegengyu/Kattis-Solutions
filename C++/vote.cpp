#include <cstdio>
using namespace std;

int main() {
	int t, n, i, max, win, pax, same;
	scanf("%d", &t);
	
	while(t--) {
		scanf("%d", &n);
		max = 0;
		win = 0;
		same = 0;
		for(int k = 1; k <= n; k++) {
			scanf("%d", &i);
			max += i;
			if(i == win)
				same++;
			if(i > win) {
				win = i;
				pax = k;
				same = 0;
			}
		}
		
		if((float)win / max > 0.5)
			printf("majority winner %d\n", pax);
		else if(same > 0)
			printf("no winner\n");
		else
			printf("minority winner %d\n", pax);
	}
}