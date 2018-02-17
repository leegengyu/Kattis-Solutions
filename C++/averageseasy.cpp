#include <cstdio>

int main() {
	int t;
	
	scanf("%d", &t);
	
	while(t--) {
		int ncs, ne, e, num = 0, cs[1000];
		double avgcs = 0.0, avge = 0.0;
		
		scanf("%d %d", &ncs, &ne);
		
		for(int i = 0; i < ncs; i++) {
			scanf("%d", &cs[i]);
			avgcs += cs[i] / (float)ncs;
		}

		for(int i = 0; i < ne; i++) {
			scanf("%d", &e);
			avge += e / (float)ne;
		}
		
		for(int i = 0; i < ncs; i++)
			if(cs[i] < avgcs && cs[i] > avge)
				num++;
			
		printf("%d\n", num);
	}
}