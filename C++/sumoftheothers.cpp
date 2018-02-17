#include <cstdio>

int main() {
	int i = 0;
	char c;
	
	while(c != EOF) {
		int n, arr[30];
		
		scanf("%d", &n);
		arr[i++] = n;
		
		if((c = getchar()) == '\n') {
			for(int j = 0; j < i; j++) {
				int temp = 0;
				for(int k = 0; k < i; k++) {
					if(k == j)
						continue;
					
					temp += arr[k];
				}
				
				if(arr[j] == temp) {
					printf("%d\n", arr[j]);
					break;
				}
			}
			
			i = 0;
		}
	}
}