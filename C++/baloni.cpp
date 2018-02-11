#include <cstdio>

int main() {
	int n, h, count = 0, arr[1000000] = {0};
	
	scanf("%d", &n);

	while(n--) {
		scanf("%d", &h);
		arr[h - 1]++;
		
		if(arr[h])
			arr[h]--;
		
		else
			count++;
	}
	
	printf("%d\n", count);
}
