#include <cstdio>

int main() {
	int h, w, n, i, temp;
	bool cont = 1, done;
	
	scanf("%d %d %d", &h, &w, &n);
	
	temp = w;
	while(n--) {
		scanf("%d", &i);
		if(cont) {
			if(i > temp) {
				cont = 0;
				done = 0;
			}
			else {
				temp -= i;
				if(temp == 0) {
					temp = w;
					h--;
				}
				if(h == 0) {
					cont = 0;
					done = 1;
				}
			}
		}
	}

	done ? printf("YES\n") : printf("NO\n");	
}
