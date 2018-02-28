#include <cstdio>

inline void fastRead_int(int &x) {
	register int c = getchar_unlocked();
	x = 0;
	int neg = 0;

	for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());

	if(c=='-') {
		neg = 1;
		c = getchar_unlocked();
	}

	for(; c>47 && c<58 ; c = getchar_unlocked())
		x = (x<<1) + (x<<3) + c - 48;

	if(neg)
		x = -x;
}

int main() {
	int n, l, j = 0, arr[1000000];
	
	scanf("%d %d", &l, &arr[0]);
	
	for(int i = 1; i < l; i++) {
		fastRead_int(n);
		if(n > arr[j])
			arr[++j] = n;
	}
	
	printf("%d\n", j + 1);
	for(int i = 0; i < j + 1; i++)
		printf("%d ", arr[i]);
	printf("\n");
}