#include <cstdio>

int main() {
	int n, b, j;
	bool arr[1001] = {0};

	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		scanf("%d", &b);
		arr[b]++;
	}
	
	for(int i = 1; i <= 1000; i++) {
		if(arr[i]) {
			printf("%d", i);
			for(j = i + 1; j <= 1000; j++)
				if(!arr[j])
					break;

			if((i == j - 1) || (i == j - 2))
				printf(" ");
			
			else {
				printf("-%d ", j - 1);
				i = j;
			}
		}
	}
}