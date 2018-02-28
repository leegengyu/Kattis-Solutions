#include <cstdio>

int main() {
	int c;
	
	scanf("%d", &c);
	
	while(c--) {
		int n, t, count = 0, g[1000];
		float avg = 0.0;
		
		scanf("%d", &n);
		
		for(int i = 0; i < n; i++)
			scanf("%d", &t), g[i] = t, avg += t;
		
		avg /= n;
		
		for(int i = 0; i < n; i++)
			if(g[i] > avg)
				count++;
		
		printf("%.3f%%\n", (float)count / n * 100);
	}
}