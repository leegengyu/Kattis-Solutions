#include <cstdio>

int main() {
	int w, l, n, num;
	
	while(scanf("%d %d", &w, &l), w || l) {
		scanf("%d", &n);
		
		char dir;
		int x = 0, y = 0, aX = 0, aY = 0;
		while(n--) {
			scanf(" %c %d", &dir, &num);
			
			if(dir == 'u') {
				y += num;
				aY + num > l - 1 ? aY = l - 1 : aY += num;
			}
			if(dir == 'd') {
				y -= num;
				aY - num < 0 ? aY = 0 : aY -= num;
			}
			if(dir == 'l') {
				x -= num;
				aX - num < 0 ? aX = 0 : aX -= num;
			}
			if(dir == 'r') {
				x += num;
				aX + num > w - 1 ? aX = w - 1 : aX += num;
			}
		}
		
		printf("Robot thinks %d %d\n", x, y);
		printf("Actually at %d %d\n", aX, aY);
	}
}