#include <stdio.h>

int forward(int, int, int);
int backward(int, int, int);

int main(void) {
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(forward(a, b, c) > backward(a, b, c))
		printf("%d\n", forward(a, b, c));
	else
		printf("%d\n", backward(a, b, c));

	return 0;
}

int forward(int a, int b, int c) {
	int count = 0;
	
	while(c - b > 1) {
		a = b;
		b++;
		count++;
	}
	
	return count;
}

int backward(int a, int b, int c) {
	int count = 0;
	
	while(b - a > 1) {
		c = b;
		b--;
		count++;
	}
	
	return count;
}